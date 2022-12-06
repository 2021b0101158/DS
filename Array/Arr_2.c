
#include<stdio.h>
int main(){
    int i;
    int a[5]={1,2,3,4,5};
    for(i=0;i<5;i++){
      a[i]=a[i+1];
    }
    for(i=0;i<5;i++){
    printf("%d ",a[i]);
    }
}
