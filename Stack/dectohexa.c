#include<stdio.h>
#define stacksize 15
#define true 1;
#define false 0;
#include<stdlib.h>


struct stack {
int item[15];
int top;

};
  struct stack s;

   int initialize(){
    s.top=-1;
   }

  int push(int x) {
  if (s.top == stacksize - 1) {
    printf("stack is overflowed");
    exit(1);
  }

  s.top++;
  s.item[s.top] = x;
}
int isempty(){
  if(s.top == -1){
    return true;}
  else
    return false;
}
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
char stacktop(){
  char x;
  x = s.item[s.top];
  return x;
}
int hexa(int n){
  while(n!=0){




  }





}
int main(){
int i,n;
printf("enter the number");
scanf("%d",&n);
octal(n);
}

