
#include <stdio.h>
#include <stdlib.h>
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
void insbeg(struct node **list,char x)
{
    struct node *p;
    p = getnode();
    p->info = x;
    p->next = *list;
    *list = p;
}
void insmid( struct node **list,int k,int x){
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
    while (q->next != NULL)
    {
        q = q->next;
    }
    p = getnode();
    p->info = x;
    p->next = NULL;
    q->next = p;
}
void delaftk(struct node **list,int k){
struct node *p,*q;
p=*list;
int i=0,x=0;
while(i!=(k-1)){
 p=p->next;
 i++;

}
//q=getnode();
p=q;
p->next=q->next;
x=q->info;

free(q);
printf("%d",x);
    
}
void delaft(struct node **list){
    int x;
    struct node *q,*r,*p;
    p=*list;
    q=p->next;
    r=q->next;
    p->next=r;
    free(q);
    return x;
}



void traverse( struct node **list)
{
    struct node *p;
    p = *list;
    int count=0;
    
    
    while (p != NULL)
    {
        count++;
        printf("%d\n", p->info);
        p = p->next;
    }
    printf("%d no of value ",count);
}
 int  delbeg( struct node **list){
 struct node *p;
 int x;
p=*list;
(*list)=(*list)->next;
//free(p);
x=p->info;
return x;

}
 int delend( struct node **list){
    int x;
struct node *q ,*p;
q=(*list);
p=NULL;
while(q->next!=NULL){
    p=q;
    q=q->next;
}
p->next=NULL;
x=q->info;
//free(q);
return x;

 }
 
 int  count(struct node *list){
     struct node *p;
     int i;
     while(p!=NULL){
     p=p->next;
     i++;
     } 
     return i;
 }
 void delnode(struct node **list,int k){
    struct node *p,*q;
    p=*list;
    int i=1;
    while(i<=k)
    {
        i++;
        if(p!=NULL){
            p=p->next;
        }
        else{
           int flag=1;
           break;
        }
    }
   q=*list;
   if(p!=NULL){
    while(p->next!=NULL){
        q=q->next;
        p=p->next;
       
    }
     delaft(&q);
   }
  else{
    delbeg(&p);
  }
}

 

