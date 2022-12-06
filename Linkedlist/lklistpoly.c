#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    int exp;
    struct node *next;
};

struct node *getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **list,int x,int y)
{
    struct node *p;
    p = getnode();
    p->info = x;
    p->exp=y;
    p->next = *list;
    *list = p;
}
void insaft( struct node **list,int k,int x,int y){
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
p->exp=y;
p->next=q->next;
q->next=p;

}
void insat(struct node **list ,int index,int x,int y){
struct node *p,*q;

p=*list;
int i=0;
while(i!=(index-1)){
 p=p->next;
 i++;

}
q=getnode();
q->info=x;
q->exp=y;
q->next=p->next;
p->next =q;


}
 void DelAft(struct node **p)
 {

 struct node *q;
 q=(*p)->next;
 (*p)->next=q->next;

 free(q);
 
 }
void insend( struct node  **list,int x,int y)
{
    struct node *q, *p;
    q = *list;
    if(*list==NULL){
        insbeg(&(*list), x,y);
    }
    else{
    while (q->next != NULL)
    {
        q = q->next;
    }
    p = getnode();
    p->info = x;
    p->exp=y;
    p->next = NULL;
    q->next = p;
}
}
void insord(struct node **start,int x,int y){
struct node *p ,*q;
p=*start;
q=NULL;
while(p!=NULL && y<=p->exp){
    q=p;
    p=p->next;
}
if(q==NULL)
insbeg(&(*start),x,y);
else
insaft(start,(q->info),x,y);

}

void traverse( struct node *list)
{
    struct node *p;
    p = list;
    while (p!= NULL)
    {
        printf("(%d x*%d)+", p->info,p->exp);
        p = p->next;
    }
  
}
void add(struct node **list1, struct node **list2){
struct node *p,*q;
struct node *sum;
sum=NULL;
p=*list1;
q=*list2;

while(p!=NULL && q!=NULL){
  if(p->exp==q->exp){
    
     insend(&sum,(p->info)+(q->info),p->exp);
    p=p->next;
    q=q->next;
       }
  else if(p->exp>q->exp){
    insend(&sum,p->info,p->exp);
    p=p->next;
        }
  else{
   insend(&sum,q->info,q->exp);
   q=q->next;

  }

}
while(p!=NULL){
insend(&sum,p->info,p->exp);
p=p->next;

}

while(q!=NULL){
insend(&sum,q->info,q->exp);
q=q->next;

}
printf("\n\n");
traverse(sum);
}

void sub(struct node **list1, struct node **list2){
struct node *p,*q;
struct node *sum;
sum=NULL;
p=*list1;
q=*list2;

while(p!=NULL && q!=NULL){
  if(p->exp==q->exp){
    p->info=p->info-q->info;
  insend(&sum,p->info,p->exp);
      p=p->next;
    q=q->next;

  }
  else if(p->exp>q->exp){

    insend(&sum,p->info,p->exp);
    p=p->next;

  }
  else{
  
   insend(&sum,(-q->info),q->exp);
   q=q->next;

  }
}
while(p!=NULL){
insend(&sum,p->info,p->exp);
p=p->next;

}
while(q!=NULL){
insend(&sum,(-q->info),q->exp);
q=q->next;

}
traverse(sum);
}/*
void mul(struct node **list1,struct node **list2){
  struct node *p,*q,*mul;
  p=*list1;
  q=*list2;
  mul=NULL;
  
  while(q!=NULL){
     while(p!=NULL){
   insend(&mul,p->info*q->info,q->exp+p->exp);
     p=p->next;
     }
  q=q->next;

  }

traverse(mul);

}*/
void mul(struct node **list1,struct node **list2)
{
   // printf("hii");
    struct node *p,*q,*m;
    m=NULL;
    q=*list2;
    p=*list1;
    while(q!=NULL)
    {
        
        while(p!=NULL)
        {
        insord(&m,(p->info)*(q->info),(q->exp)+(p->exp));
        p=p->next;
        }
        q=q->next;
    }
    //m=p;
    while(m->next!=NULL)
    {
        
        if((m->exp)==(m->next)->exp)
        {
            m->info=(m->info)+((m->next)->info);
            DelAft(&m);
        }
        else
        {
            m=m->next;
        }
    }
    traverse(m);

}

int main(){

struct node *start1;
struct node *start2;
    struct node *start3;
    start1 = NULL;
    start2 = NULL;
   
   insord(&start1,2,2);
   insord(&start1,3,6);
  insord(&start1,4,3);
  insord(&start1,5,1);
   //insbeg(&start1,2,1);
   //insbeg(&start2,7,5);
   //insbeg(&start2,6,3);
   insord(&start2,8,2);
   insord(&start2,3,7);
 // traverse(start1);
  printf("\n\n");
  //dddddddddddtraverse(start2);
 //sub(&start1,&start2);
 //add(&start1,&start2);
 mul(&start1,&start2);



}