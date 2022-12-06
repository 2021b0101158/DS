
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
void insbeg(struct node **list,int x)
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
  void push(struct node **list,int x){
    struct node *p;
    p=*list;
    insbeg(&p,x);


 }
 int pop(struct node **list){
struct node *p;
int y;
p=*list;

y=delbeg(&p);
printf("%d\n\n",y);


 }
 void insvow(struct node  **list,char x){
    

    
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

int main()
{
    
    struct node *start;
    
    int x,n;
    start = NULL;
    insbeg(&start,100);
    insbeg(&start,200);
    insbeg(&start,300);
    insbeg(&start,400);
    // insend(&start,10);
    // insend(&start,20);
    // insend(&start,30);
//     insmid(&start,200,500);
//     delgo(&start,3);
//    insmid(&start,10,60);
traverse(&start);

    
    // printf("\n\n");
    // push(&start,66);
    // pop(&start);
    printf("\n");
     x=delbeg(&start);
    printf("%d",x);
    // printf("\n");
    // delbeg(&start);
    // traverse(&start);

   
    
}
