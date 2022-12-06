/*#include<stdio.h>

struct stack{
   int size;
   int top;
   int *arr;


};


int isempty(struct stack* ptr)
{
 if (ptr->top==-1)
    return 1;
 else
    return 0;
    }
int isfull(struct stack* ptr)
{
 if (ptr->top==ptr->size-1)
     return 1;
 else
    return 0;
}

 int main(){
   struct stack *s;
   s->size=80;
   s->top=-1;
   s->arr=(int *)malloc(s->size*sizeof(int));

 if(isempty(s))
    {
    printf("stack empty");
 }
 else{
    printf("stack not empty ");
 }
    return 0;

 }

*/


#include<stdio.h>
#define true 1
#define false 0

struct stack{
    int item[10];
    int top;


};
struct stack s;

void push(int x)
{
    s.top=s.top+1;
    s.item[s.top]=x;

}

int pop()
{

int x;
x=s.item[s.top];
s.top=s.top-1;
 return x;
}
int Isempty(){
    if(s.top=-1)
        return true;
    else
        return false;

}
int main(){
s.top=-1;
int y;
printf("%d",Isempty());
push(100);
push(200);
push(300);
y=pop();
printf(" %d",y);
y=pop();
printf(" %d",y);
y=pop();
printf(" %d",y);

}
