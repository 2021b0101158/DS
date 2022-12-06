#include<stdio.h>
int main(){
 int a[7];
 int i=0,j=0,n,m;
 printf("enter the elements\n");
 for(i=0;i<7;i++){
    scanf("%d",&a[i]);
 }
printf("enter the element to be found");
scanf("%d",n);
i=0;
j=6;
while( i<=j){
        m=(i+j)/2;
    if (a[m]==n){
            printf("element found");
    }
else if(n<a[m]){
    j=m-1;
}
else{
    i=m+1;
}
}


}
