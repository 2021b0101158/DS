#include<stdio.h>
int main(){
    int i,a[6]={1,2,3,4,5};
    //to insert an element at a[2]
    for(i=6;i>2;i--){
        a[i]=a[i-1];
    }
    a[2]=9;
    printf("inserted array is\n");
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
}
