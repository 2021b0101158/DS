#include<stdio.h>
#include<stdlib.h>
int arr[10];
int i=0;
int top0,top1;

int x;


int initialize(){
top0=-1;
top1=4;

}
 int push0(int x){

 top0=top0+1;
 arr[top0]=x;
 }
int push1(int x){

 top1=top1+1;
 arr[top1]=x;
 }

int pop0(){
    int x;
x=arr[top0];
top0=top0-1;
return x;
}
int pop1(){
    int x;
x=arr[top1];
top1=top1-1;
return x;
}
int main(){
    initialize();
    int l;
push1(100);
push1(300);
push1(500);
push0(200);
for(i=0;i<10;i++)
    printf("%d\n",arr[i]);
l=pop0();
printf("%d",l);
}
