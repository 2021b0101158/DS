#include<stdio.h>

int mergesort(int a,int low,int high){
  int mid;
  if(low<high){
    mid=(low+high)/2;
     mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    mergearray(a,low,mid,high);
  }

}
int mergearray(int a[8],int low,int mid,int high){

   int i=low,j=mid+1,k,c[8];

   while(i<=mid && j<=high){
    if(a[i] < a[j]){
        c[k]=a[i];
        i++;
        k++;
    }
    else
    {
        c[k]=a[j];
        j++;
        k++;

    }
   }
    while(i<=mid){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=high){
        c[k]=a[j];
        j++;
        k++;
    }
    for(i=low;i<=high;i++){
        a[i]=c[i];

   }


   }




int main(){
int a[8]={4,2,1,6,7,9,5,3};

int i,low=0,mid,high=7;
 mergesort(a,low,high);
for(i=0;i<8;i++)
    printf(" %d",a[i]);

return 0;

}

