#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};

struct node *getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **list,int x)
{
    struct node *p;
    p = getnode();
    p->info = x;
    p->next = *list;
    *list = p;
}
void insaft( struct node **list,int k,int x){
struct node *p, *q;
q=*list;
while(q!=NULL){
    if(q->info==k)
        break;
    else
     q=q->next;
           
}
p=getnode();
p->info=x;
p->next=q->next;
q->next=p;

}
void insend( struct node  **list,int x)
{
    struct node *q, *p;
    q = *list;
    if(*list==NULL){
        insbeg(&(*list), x);
    }
    else{
    while (q->next != NULL)
    {
        q = q->next;
    }
    p = getnode();
    p->info = x;
    p->next = NULL;
    q->next = p;
}
}
void insord(struct node **start,int x){
struct node *p ,*q;
p=*start;
q=NULL;
while(p!=NULL && x>p->info){
    q=p;
    p=p->next;
}
if(q==NULL)
insbeg(&(*start),x);
else
insaft(&(*start),(q->info),x);

}

void traverse( struct node *list)
{
    struct node *p;
    p = list;
    int count;
    while (p != NULL)
    {
        printf("%d\n", p->info);
        p = p->next;
    }
   
}

void merge(struct node **list1,struct node **list2){
struct node *p,*q;
struct node *start3;
start3=NULL;
p=*list1;
q=*list2;

while(p!=NULL && q!=NULL){
    if(p->info>q->info)
      {
      insend(&start3,q->info);
      q=q->next;
      }
    else{
      insend(&start3,p->info);
      p=p->next;
}
}
while(p!=NULL)
{
      insend(&start3,p->info);
      p=p->next;
}
while(q!=NULL)
{
      insend(&start3,q->info);
      q=q->next;
}
printf("\n\n");
traverse(start3);
}
void concat(struct node **list1,struct node **list2){
struct node *p,*q;
struct node *start3;
start3=NULL;
p=*list1;
q=*list2;
while(p!=NULL){
    insend(&start3,p->info);
    p=p->next;
}
p->next=q;
while(p!=NULL){
    insend(&start3,p->info);
    p=p->next;
}

printf("\n\n");
traverse(start3);
}
int main(){

struct node *start1,*start2,*start3;
    
    //int x,n;
    start3=NULL;
    start1 = NULL;
    insord(&start1,100);
    insord(&start1,900);
    insord(&start1,700);
    insord(&start1,400);
traverse(start1);
printf("\n");
   start2 = NULL;
    insord(&start2,50);
    insord(&start2,90);
    insord(&start2,200);
    insord(&start2,60);
traverse(start2);
concat(&start1,&start2);


}