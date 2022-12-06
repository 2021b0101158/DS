#include<stdio.h>
int fib(int n){
    int i;
    int dat[100];

if (n==1)
    dat[1]=0;
else if(n==2)
    dat[2]=1;
else if (dat[n]==0){
    dat[n]= fib(n-1)+fib(n-2);}
 else
    return  fib(n)= dat[n];
    }



int main()
         {
     int i,x ;
             for(i=1;i<=100;i++){
                x=fib(i);
                printf(" \n %d %d",i, x);
             }


         }

