#include<stdio.h>
int fib(int n){
if (n==1)
    return 0;
else if(n==2)
    return 1;
else
    return fib(n-1)+fib(n-2);

}


int main()
         {
     int i,x ;
             for(i=1;i<=100;i++){
                x=fib(i);
                printf(" \t %d %d",i, x);
             }


         }
