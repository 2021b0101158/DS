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
}


void UNION(struct node **list1,struct node **list2){
struct node *Union;
struct node *p,*q;
Union=NULL;
p=*list1;
q=*list2;

while(p!=NULL && q!=NULL){
    if(p->info==q->info)
      {
      insend(&Union,p->info);
      p=p->next;
      q=q->next;
      }
    else{
        if(p->info>q->info){
      insend(&Union,q->info);
      q=q->next;}
        else{
      insend(&Union,p->info);
      p=p->next;}
}
}
while(p!=NULL){
    insend(&Union,p->info);
    p=p->next;
}
while(q!=NULL){
    insend(&Union,q->info);
    q=q->next;
}
traverse(Union);
}
void Inter(struct node **list1,struct node **list2){
struct node *p, *q;
struct node *in;
in=NULL;
p=*list1;
q=*list2;
while(p!=NULL && q!=NULL){
    if(p->info==q->info)
      {
      insend(&in,q->info);
       p=p->next;
       q=q->next;
      }
      
    else{
       if(p->info>q->info){
      //insend(&in,q->info);}
      q=q->next;}
        else{
     // insend(&in,p->info);

      p=p->next;}
      //q=q->next;
    }
    
}
traverse(in);
}

void setdiff(struct node **start1,struct node **start2)
{
    struct node *p, *q;
    struct node  *s;
  p=*start1;
  q=*start2;
  s=NULL;
  //insbeg(&s,0);
  while(p!=NULL && q!=NULL)  
 {
  if(p->info==q->info){
    p=p->next;
    q=q->next;
  }
 else{
  if(p->info>q->info)
      {
   // insend(&s,q->info);
    q=q->next;
      }
  else{
    insend(&s,p->info);
    p=p->next;
      }

}
}
while(p!=NULL){
    insend(&s,p->info);
    p=p->next;
}
traverse(s);
}
int main(){

struct node *start1,*start2,*start3;
    
    //int x,n;
    start3=NULL;
    start1 = NULL;
    insord(&start1,100);
    insord(&start1,900);
    insord(&start1,300);
    insord(&start1,400);
traverse(start1);
printf("\n");
   start2 = NULL;
    insord(&start2,300);
    insord(&start2,90);
    insord(&start2,200);
    insord(&start2,60);
traverse(start2);
printf("\n\n");
Inter(&start1,&start2);

}