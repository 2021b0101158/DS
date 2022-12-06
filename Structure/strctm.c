#include<stdio.h>
struct time{

int hour;
int min;
int sec


};
int main(){
int i,x,y;
struct time t[3];;

for(i=0;i<2;i++){

    scanf("%d",&t[i].hour);
    scanf("%d",&t[i].min);
    scanf("%d",&t[i].sec);
}


t[2].sec=((t[0].sec+t[1].sec)%60);
x=(t[0].sec+t[1].sec)/60;
t[2].min=(t[0].min+t[1].min+x);

t[2].min=((t[0].min+t[1].min)%60);
y=(t[0].min+t[1].min)/60;
t[2].hour=(t[0].hour+t[1].hour+y);


for(i=0;i<2;i++){

    printf("%d \t",t[i].hour);
    printf("%d \t",t[i].min);
     printf("%d \n",t[i].sec);
}
 printf("%d \t",t[2].hour);
 printf("%d \t",t[2].min);
 printf("%d \n",t[2].sec);
return 0;


}
