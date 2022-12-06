#include<stdio.h>
int main ()
{
int n;
printf("enter n");
scanf("%d",&n);
printf("%d",fact(n));

}
int fact(int n){
    int fact=1,i;
for(i=1;i<=n;i++)
    fact=fact*i;
return fact;
}

