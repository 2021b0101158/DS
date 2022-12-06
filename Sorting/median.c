#include<stdio.h>
int main(){
    int i,n,c;
    int a[100]={0};
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    c=0;
    if((n%2)==0){
            c=(n/2);
        printf("%d is median and",a[c-1]);
        printf(" %d is median",a[c]);
    }

    else{
        c=((n+1)/2);
        printf("%d  is the median",a[c-1]);
}
}
