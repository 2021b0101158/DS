#include <stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
struct node* getnode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
void traverse(struct node **cs)
{
  struct node *p;
  p=(*cs)->next;
  while(1)
    {
      if(p!=(*cs)){
      printf("%d\t",p->info);
      p=p->next;
      }
      else{
        printf("%d",p->info);
        break;
      }
    }
}
void insbeg(struct node **cs,int x)
{
  struct node *p;
  // q=*cs;
  p=getnode();
  p->info=x;
  if(*cs!=NULL)
  {
    p->next=((*cs)->next);
    (*cs)->next=p;
  }
  else
  {
    (*cs)=p;
    (*cs)->next=p; 
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
void insaft(struct node ** cs,int k,int x)
{
  struct node *p,*q;
  q=(*cs)->next;
  if((*cs)!=NULL){
  while(k!=q->info){
    if(q!=(*cs)){
      q=q->next;
    }
    else{
      q=q->next;
      if(k==q->info){
        break;
      }
      else{
        printf("%d not found",k);
        exit(1);
      }
    }
  }}
  if((*cs)!=NULL)
  {
    p=getnode();
    p->info=x;
    p->next=q->next;
    q->next=p;
  }
  else
  {
    printf("void insertion");
    exit(1);
  }
  
}
void delbeg(struct node ** cs)
{
  struct node *p,*q;
  p=(*cs)->next;
  q=p->next;
  (*cs)->next=q;
  free(p);
}
void delend(struct node **cs)
{
  struct node *p,*q;
  p=(*cs)->next;
  q=(*cs);
  while(p->next!=(*cs))
  {
    p=p->next;
  }
  p->next=(*cs)->next;
  free(*cs);
  (*cs)=p;
}
void delaft(struct node **cs)
{
  
}

int main(){
  struct node *cs;
  cs=NULL;
  insend(&cs,34);
  insend(&cs,32);
  insend(&cs,31);
  insend(&cs,30);
  // insaft(&cs,31,35);
  traverse(&cs);
  printf("\n");
  delend(&cs);
  traverse(&cs);

}