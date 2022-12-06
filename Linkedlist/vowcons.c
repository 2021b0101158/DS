#include<stdio.h>
#include<stdlib.h>
#include"linearprimitive.h"

void consvow(struct node **list){
    struct node *p,*q,*r;
    q=*list;
    p=NULL;
    r=NULL;
    while(q!=NULL){
        if(q->info=='a' || q->info=='e'){
            q=q->next;
            if(p==NULL){
                if(r==NULL){
                    int x=delaft(&r);
                }
                else{
                    insbeg(&start,x);
                    p=*list;
                    r=p;
                }
            }
            else{
                x=delaft(&r);
                insaft(&p,x);
                p=p->next;
            }
        }
      else{
        r=q;
        q=q->next;
      }

    }




}
int main(){
    struct node *start;
    start=NULL;
    insbeg(&start,'a');
    insbeg(&start,'b');
    //insbeg(&start,c);
    //insbeg(&start,d);
   // insbeg(&start,e);
   // insbeg(&start,f);
    traverse(&start);
    //delnode(&start,3);
    printf("\n\n");
   // traverse(&start);
   

}