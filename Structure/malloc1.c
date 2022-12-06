#include<stdio.h>
#include<stdlib.h>
void input( int *m,int n){
int i=0;
 printf("enter the values");
 for(i=0;i<n;i++)
 scanf("%d",(m+i));
}
void output(int *m,int n){
int i;
 printf(" the values");
 for(i=0;i<m;i++)
 print("%d",*(m+i));
}

int main(){
    int i,n;
//int a[10]={1,2,3,4,5,6,7,8,9,10};


int *p;
scanf("%d",&n);
//printf("%a",sizeof (int));

p=(int *)malloc(n*sizeof(int));
/*

for(i=0;i<n;i++)
    scanf("%d",(p+i));


for(i=0;i<n;i++)
    printf("%d",*(p+i));*/

    input(p,n);
  output(p,n);
return 0;

}
