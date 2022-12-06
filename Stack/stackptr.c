#include <stdio.h>
#include <stdlib.h>
#define stacksize 10
#define TRUE 1
#define FALSE 0
struct stack

{
  int item[stacksize];
  int top;
};


/***************/
int initialize( struct stack *s)
   {
    s->top = -1;
    }

/***************/

int isempty( struct stack *s) {
  if (s->top == -1)
    return TRUE;
  else
    return FALSE;
}

/***************/

int push( struct stack *s,int x) {
  if (s->top == stacksize - 1) {
    printf("stack is overflowed");
    exit(1);
  }

  s->top++;
  s->item[s->top] = x;
}

/***************/

int pop(struct stack *s) {
  int x;
  if(isempty(s))
    {
    printf("stack underflowed");
    exit(1);
    }
  x = s->item[s->top];
  s->top--;
  return x;
}
/****************/
char stacktop(struct stack s) {
  char x;
  x = s.item[s.top];
  return x;
}
int main(){
    int x;
    struct stack n;
    initialize(&n);
    push(&n,2);
    push(&n,3);
    push(&n,5);
    x=pop(&n);
    printf("%d",x);
     x=pop(&n);
    printf("\n%d",x);
    printf("\n");
    struct stack p;
    initialize(&p);
    push(&p,200);
    push(&p,400);
    push(&p,600);
    x=pop(&p);
    printf("\n%d",x);
}
