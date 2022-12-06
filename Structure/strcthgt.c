#include<stdio.h>
struct height{

int feet;
int inch;



};
int main(){
int i,x;
struct height h[3];
for(i=0;i<2;i++){

    scanf("%d",&h[i].feet);
    scanf("%d",&h[i].inch);
}


h[2].inch=((h[0].inch+h[1].inch)%12);
x=(h[0].inch+h[1].inch)/12;
h[2].feet=(h[0].feet+h[1].feet+x);

for(i=0;i<2;i++){

    printf("%d \t",h[i].feet);
    printf("%d \n",h[i].inch);
}
 printf("%d \t",h[2].feet);
    printf("%d ",h[2].inch);
return 0;


}
