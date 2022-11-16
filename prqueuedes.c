#include<stdio.h>
#include<stdlib.h>
int n;
void arrinsert(int *a,int i, int x){
        int j;
        for(j=n-1;j>=i;j--){
        a[j+1]=a[j];
}
a[i]=x;
}
/*void arrdelete(int *a){

    int i;
    for(i=0;i<n-1;i++){
        a[i-1]=a[i];
    }
        }*/
void pqinsertion(int *a,int x){

int i=0;
while(i<n && x>a[i]){

    i=i+1;
}
 arrinsert(a,i,x);
n++;
}
void display(int*a)
{
    int i;
  for(i=0;i<n;i++)
       printf("\n%d",a[i]);
}
 int  pqdelete(int *a){
  int i,x;
  // arrdelete(a);
  x=a[n-1];
  n=n-1;
 return x;
 }




int main(){
     int x;
     int n =0;
     int a[100]={0};
      pqinsertion(a,1100);
      pqinsertion(a,500);
      pqinsertion(a,900);
      pqinsertion(a,200);
      display(a);
      printf(" \n deletd element is %d",pqdelete(a));
      printf(" \n deletd element is %d",pqdelete(a));
      printf(" \n deletd element is %d",pqdelete(a));
      printf(" \n deletd element is %d",pqdelete(a));




}
