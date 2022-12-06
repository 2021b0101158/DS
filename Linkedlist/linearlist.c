#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start;

struct node *getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(int x)
{
    struct node *p;
    p = getnode();
    p->info = x;
    p->next = start;
    start = p;
}
void insmid(int k,int x){
struct node *p, *q;
q=start;
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
void insend(int x)
{
    struct node *q, *p;
    q = start;
    while (q->next != NULL)
    {
        q = q->next;
    }
    p = getnode();
    p->info = x;
    p->next = NULL;
    q->next = p;
}
void traverse()
{
    struct node *p;
    p = start;
    int count = 0;

    while (p != NULL)
    {

        printf("%d\n", p->info);
        p = p->next;
        count++;
    }
    printf("%d", count);
}
 int  delbeg(){
 struct node *p;
 int x;
p=start;
start=start->next;
//free(p);
x=p->info;
return x;

}
 int delend(){
    int x;
struct node *q ,*p;
q=start;
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
 /*
int main()
 {
    int count; 
    int x;
    start = NULL;
    insbeg(100);
    insbeg(200);
    insbeg(300);
    insbeg(400);
    insend(10);
    insend(20);
    insend(30);
    insmid(200,500);
    insmid(10,60);
    traverse();
    x= delbeg();
   printf("\ndeleted element is %d",x);
    x= delend();
   printf("\ndeleted element is %d",x);
     x= delbeg();
   printf("\ndeleted element is %d",x);
    x= delend();
   printf("\ndeleted element is %d",x);
}*/
