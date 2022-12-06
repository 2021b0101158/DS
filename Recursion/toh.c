
#include<stdio.h>

 void toh(int n,char s,char m,char d){
 if (n==1)
    printf("\n transfer disk from %c to tower %c",s,d);
    else{
 toh(n-1,s,d,m);
 printf("\n transfer disk from %c to tower %c",s,d);
 toh(n-1,m,s,d);
    }
 }
 int main()
 {

  toh(5,'s','m','d');
  return 0;



 }
