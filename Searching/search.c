#include<stdio.h>
int main(){
int i=0;
int j=0;
int t,min ;
int A[6]={2,1,7,4,8};

for(i=0;i<6;i++){
    min=i;
for(j=i+1;j<6;j++){

if(A[min]>A[j]){
min=j;
}
if(min!=i){
t=A[i];
A[i]=A[min];
A[min]=t;

}
}

}
for(i=0;i<6;i++){
    printf("%d ",A[i]);
}
return 0;
}
