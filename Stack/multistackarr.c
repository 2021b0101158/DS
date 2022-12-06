#include<stdio.h>
#include<stdlib.h>
int arr[15];
int i=0;
int top[5];

int x,n=15,m=5;


int initialize(){
top[i]=(n/m)*i-1;


}
 int push0(int x){

 top[i]=top[i]+1;
 arr[top[i]]=x;
 }
int push[i](int x){

 top1=top1+1;
 arr[top1]=x;
 }
 int push2(int x){

 top2=top2+1;
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

push[1](100);
push[1](300);
push[2](500);
push[0](200);
for(i=0;i<10;i++)
    printf("%d\n",arr[i]);
l=pop0();
printf("%d",l);
}
