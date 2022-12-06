#include<stdio.h>
struct comp{

int real;
int img;



};
int main(){
int i;
struct comp c[3];
for(i=0;i<2;i++){

    scanf("%d",&c[i].real);
    scanf("%d",&c[i].img);


}
c[2].real=c[0].real+c[1].real;
c[2].img=c[0].img+c[1].img;

for(i=0;i<3;i++){

    printf("%d\t",c[i].real);
    printf("%d\n",c[i].img);


}

return 0;


}

