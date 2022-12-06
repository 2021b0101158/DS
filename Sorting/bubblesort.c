#include<stdio.h>
int main(){

int a[12]={5,8,6,7,9,11,13,14,16,17,23,34},temp,i,j;
for(j=12;j>0;j--){
for(i=0;i<j;i++){
    if(a[i]>a[i+1]){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

}
 if(a[j]==a[j-1])
    break;
}
for(i=0;i<12;i++){
    printf(" %d",a[i]);

}
}
