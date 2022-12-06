#include<stdio.h>
#include<stdlib.h>
#define stacksize 10
struct stack {

int item[stacksize];
int top;

};

void initialize( struct stack *s){
 s->top=-1;


}
int isempty(struct stack *s){


}
int push(struct stack *s,int x){
  s->top=s->top+1;
  s->item[s->top]=x;


}
int pop(struct stack *s){
    int x;
    x=s->item[s->top];
    s->top=s->top-1;
    return x;
}
int stacktop( struct stack *s){
    int x;
    x=s->item[s->top];
    return x;

}
int main(){
    struct stack s1;
    struct stack s2;
    initialize(&s1);
    initialize(&s2);

push(&s1,100);
push(&s1,200);
push(&s2,300);
push(&s2,400);
push(&s2,500);
push(&s2,600);
printf("\n%d",pop(&s1));
printf("\n%d",pop(&s2));
printf("\n%d",pop(&s2));


}
