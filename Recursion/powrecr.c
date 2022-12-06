#include<stdio.h>
int pow(int n,int x){
if (x==0)
    return 1;
else
    return n*pow(n,x-1);

}

int main()
{
   int n=4,x=3;
 printf("%d",pow(n,x));
}
