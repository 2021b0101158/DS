
#include<stdio.h>
int main(){
    int i,j,t,a[5]={5,3,4,2,7};

    for(i=0;i<5;i++){

       if (a[i]>a[i+1]){
        t=a[i+1];
         a[i]=t;
          a[i]=a[i+1];
        }

       else{
        a[i+1]=a[i];

       }

    }
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}
