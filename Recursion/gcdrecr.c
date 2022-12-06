#include<stdio.h>
int gcd(int n,int x){
if (n==x)
    return n;
else if(n>x)
  return gcd(n-x,x);
  else
  return gcd(n,x-n);



}

int main()
{
   int n=48,x=36;
 printf("%d",gcd(n,x));
}
