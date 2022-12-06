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
void reverse(struct node **start,int x){
struct node *p ,*q;
p=*start;
q=NULL;
while(p!=NULL && x<p->info){
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
int main(){

struct node *start;
    
    //int x,n;
    start = NULL;
   // reverse(&start,100);
   // reverse(&start,900);
   // reverse(&start,500);
   // reverse(&start,400);
   insbeg(&start,20);
   insbeg(&start,30);
   insbeg(&start,40);
   insbeg(&start,50);
   insat(&start,2,25);

traverse(start);

}