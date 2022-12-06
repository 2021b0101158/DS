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

struct stack s;
/***************/
int initialize() { s.top = -1; }

/***************/

int isempty() {
  if (s.top == -1)
    return TRUE;
  else
    return FALSE;
}

/***************/

int push(int x) {
  if (s.top == stacksize - 1) {
    printf("stack is overflowed");
    exit(1);
  }

  s.top++;
  s.item[s.top] = x;
}

/***************/

int pop() {
  int x;
  if (isempty()) {
    printf("stack underflowed");
    exit(1);
  }
  x = s.item[s.top];
  s.top--;
  return x;
}
/****************/
char stacktop() {
  char x;
  x = s.item[s.top];
  return x;
}
int min(struct stack s)
{

int x,min;
min=stacktop();
while(!isempty())
{
   x=pop();
    if(x<min)
        min=x;
}
//return min;
printf("%d",min);
}
int main(){
//struct stack n;
initialize();
push(100);
push(200);
push(300);
push(500);
push(600);
push(400);
int m;
//min(s);
min(s);
//printf("%d",m);

}
