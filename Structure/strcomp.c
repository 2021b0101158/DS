#include<stdio.h>
int main(){
int i,j,flag;
char t;
char n[20];
char m[20];

//scanf("%s",name);
gets(n);
gets(m);
printf("%s",n);
printf("\n%s",m);

while(n[i]!='\0' && m[i]!='\0'){
    if(n[i]==m[i])
        i++;

else{
    flag=1;
    break;
}
}
if(flag==1)
    printf("\nunequal");
else{
    if(n[i]==m[i])
        printf("\nequal");
    else
        printf(" \nunequal");
}
}
