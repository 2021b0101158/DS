65#include<stdio.h>
struct student{

int roll;
int sec;
int mob;
float per;



};
int main(){
int i;
struct student s[3];
for(i=0;i<3;i++){

    scanf("%d",&s[i].roll);
    scanf("%d",&s[i].sec);
    scanf("%d",&s[i].mob);
    scanf("%f",&s[i].per);

}
for(i=0;i<3;i++){

    printf("%d\t",s[i].roll);
    printf("%d\t",s[i].sec);
    printf("%d\t",s[i].mob);
    printf("%f\n",s[i].per);

}

return 0;


}
