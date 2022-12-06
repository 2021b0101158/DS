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
    struct node *p,*q;
    p=*list;
    q=NULL;
  q=getnode();
  q->info=x;
  if(*list!=NULL){
    q->next=(*list)->next;
    (*list)->next=q;
  }
  else{
    *list=q;
    (*list)->next=q;

  }  
    
}
void insaft( struct node **list,int k,int x){
struct node *p, *q,*r;

q=*list;
p=q->next;

while(p!=q){
if(p->info==k){
    r=getnode();
r->info=x;
r->next=p->next;
p->next=r;
}
p=p->next;
}


}
void insat(struct node **list ,int index,int x){
struct node *p,*q;

p=*list;
int i=0;
q=p->next;
while(i!=(index-1)){
 p=p->next;
 i++;

}
q=getnode();
q->info=x;
q->next=p->next;
p->next =q;


}
void insrend(struct node **list,int x)
{
    struct node *q, *p;
    q = (*list);
    p=NULL;
    p = getnode();
    p->info = x;
    if(q!=NULL){
        p->next=q->next;
        q->next=p;
        q=p;
    }
    else{
        q=p;
        q->next=p;
    }
}
void insend(struct node **cs,int x)
{
  struct node *p;
  // p=(*cs);
  p=getnode();
  p->info=x;
  if((*cs)!=NULL)
  {
    p->next=(*cs)->next;
    (*cs)->next=p;
    (*cs)=p;
  }
  else
  {
    (*cs)=p;
    (*cs)->next=p;
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
insaft(start,(q->info),x);

}
void delbeg(struct node **list){
struct node *p,*q;
int x;
p=*list;
q=p->next;
p->next =q->next;
x=q->info;
free(q);
printf("deleted element is %d\n",x);

}
void delend(struct node **list){
  struct node *p,*q;
  p=*list;
  int x;
  q=p->next;
  while(p->next!=q){

    p=p->next;
  }
 p->next=q;
   x=p->info;
  free(p);

printf("%d is deleted end element",x);

}
void delaft(struct node **cs,int k)
{
  struct node *p,*q;
  p=(*cs)->next;
  while(k!=p->info)
  {
    if(p!=(*cs)){
      p=p->next;
    }
    else{
      p=p->next;
      if(k==p->info)
        break;
      else
        printf("%d not found",k);
        exit(1);
    }
  }
  q=p->next;
  p->next=q->next;
  free(q);
}

void traverse( struct node **list)
{
    struct node *p,*q;
    p = *list;
     q=p->next;
    while ( q!=p )
    {
        printf("%d\n", q->info);
        q = q->next;
    }
     printf("%d\n", q->info);
}
void concat(struct node **list1, struct node **list2){
  struct node *p,*q,*r,*s,*t;
  p=*list1;
  q=p->next;
  r=NULL;
  s=*list2;
  t=s->next;
  while(q!=p){
    insend(&r,q->info);
    q=q->next;
  }
  insend(&r,q->info);
  while(t!=s){
    insend(&r,t->info);
    t=t->next;
  }
insend(&r,t->info);
  traverse(&r);

}

 
int main(){

struct node *start;
start=NULL;
insbeg(&start,5);
insbeg(&start,8);
insend(&start,56);
//insaft(&start,8,25);
//delbeg(&start);

traverse(&start);

struct node *start1;
start1=NULL;
insbeg(&start1,7);
insbeg(&start1,15);
insend(&start1,32);
traverse(&start1);
printf("\n\n");
concat(&start,&start1);

}
