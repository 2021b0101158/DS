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
    while (p != NULL)
    {
        printf("%d\n", p->info);
        p = p->next;
    }
  
}
void reverse(struct node *list1){
    struct node *p,*c;
    struct node *n;
    c=list1;
    p=NULL;
    
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        
    }
    traverse(p);
    }

void add(struct node **list1, struct node **list2){
struct node *p,*q,*s;
p=*list1;
q=*list2;
s=NULL;
//reverse(p);
//reverse(q);
int  cy=0,t=0,sum=0;
while(p!=NULL && q!=NULL){
  t=p->info+q->info+cy;
   sum=t%1000;
   cy=t/1000;
   p=p->next;
   q=q->next;
  insend(&s,sum);
}
 
traverse(s);

}

int main(){

struct node *start1;
struct node *start2;
start2=NULL;
start1=NULL;
insbeg(&start1,1569);
insbeg(&start1,5256);
//insbeg(&start1,9);
//insbeg(&start1,3);
//insbeg(&start1,2);

traverse(start1);
printf("\n\n");
insbeg(&start2,7569);
insbeg(&start2,6251);
//insbeg(&start2,4);
//insbeg(&start2,0);
//insbeg(&start2,4);
traverse(start2);
printf("\n\n");
add(&start1,&start2);
//reverse(start);
}
