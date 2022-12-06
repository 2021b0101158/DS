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
char stacktop() {
  char x;
  x = s.item[s.top];
  return x;
}

int dectobin( int n  ){
int h,i ;
initialize();
int a[10];
while(n!=0){
h=n%2;
push(h);
n=n/2;
}

while(!isempty()){

    printf("%d",pop());
}

}

int main(){
int i,n;
printf("enter the number");
scanf("%d",&n);
int a[10];
dectobin(n);

//for(i=0;i<10;i++)
   // printf("%d",a[i]);


}






