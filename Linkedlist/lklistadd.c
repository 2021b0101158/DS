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
void insat(struct node **list ,int index,int x){
struct node *p,*q;

p=*list;
int i=0;
while(i!=(index-1)){
 p=p->next;
 i++;

}
q=getnode();
q->info=x;
q->next=p->next;
p->next =q;


}
void insend( struct node  **list,int x)
{
    struct node *q, *p;
    q = *list;
    while (q->next != NULL)
    {
        q = q->next;
    }
    p = getnode();
    p->info = x;
    p->next = NULL;
    q->next = p;
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
insaft(start,(q->info),x);

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
   // printf("%d", count);
}
void reverse(struct node **list1){
    struct node *p,*c;
    struct node *n;
    c=*list1;
    p=NULL;
    
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        
    }
    return p;
   // traverse(p);
    }
    void add(struct node **list1, struct node **list2){
struct node *p,*q;
p=*list1;
q=*list2;
reverse(p);
reverse(q);



    }
int main(){

struct node *start;
start=NULL;
insord(&start,5);
insord(&start,10);
insord(&start,9);
insord(&start,2);
insord(&start,12);

traverse(start);
printf("\n\n");
reverse(&start);
}
