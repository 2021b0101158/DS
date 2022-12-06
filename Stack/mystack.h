
#include<stdio.h>
#define true 1
#define false 0
#define STACKSIZE 10
#include<stdlib.h>

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
    if(S.top=-1)
        return TRUE;
    else
        return FALSE;

}
char stacktop()
{
    int x=s.item[s.top];
    s.top--;
    return x;
}
int prcd(char a,char b){
if(a=='^' || a=='*' || a=='/' || a=='%' ){
  if(b=='^')
    return false;
  else
    return true;
}
else {
    if(b=='+'|| b=='-' )
      return true;
    else
        return false;
}



}

int main(){
s.top=-1;
int y;
push(100);
push(200);
push(300);
y=pop();
printf(" %d",y);
y=pop();
printf(" %d",y);
y=pop();
printf(" %d",y);

char a;
char b;

printf("%d",prcd('*','^'));


}




