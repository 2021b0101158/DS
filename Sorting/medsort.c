#include<stdio.h>
int partition(int a[],int low,int high){
int i,j,pivot,temp,mid;
mid=(low+high)/2;

i=low;
j=high+1;
pivot=a[low];
do{
do{
    i++;
}
while(a[i]<pivot);
do{
    j=j-1;
}while(a[j]>pivot);

if(i<j){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
}while(i<j);


    temp=a[j];
    a[j]=a[low];
    a[low]=temp;

return j;
}

void quicksort(int a[],int low,int high){
    int j;
if (low<high)
{
    j=partition(a,low,high);
    quicksort(a,low,j-1);
    quicksort(a,j+1,high);
}
}

int main(){
    int i;
int a[11]={10,50,80,30,90,60,70,20,45,55};
int low=0,high=10;
a[10]=__INT_MAX__;
quicksort(a,0,10);


for(i=0;i<10;i++)
    printf("%d\n",a[i]);


}
