
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define  TRUE 1
#define FALSE 0
#define size 10
struct queue
{
    int item[size];
    int rear,front;
};

void initialize(struct queue *q)
{
    q->front=size-1;
    q->rear=size-1;
}

int isempty(struct queue *q)
{
    if ((q->rear==q->front))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void enqueue(struct queue *q,char x)
{
    if ((q->rear+1)%size==q->front)
    {
        printf("Queue Overflows");
        exit(1);
    }
    q->rear=(q->rear+1)%size;
    q->item[q->rear]=x;
}

char dequeue(struct queue *q)
{
    if (isempty(q))
    {
        printf("Queue Underflows ");
        exit(1);
    }
    char x;
    q->front=(q->front+1)%size;
    x=q->item[q->front];
    return x;
}
int main()
{
    int y;
    struct queue myq;
    initialize(&myq);
    enqueue(&myq,4);
    enqueue(&myq,6);
    enqueue(&myq,7);
    enqueue(&myq,5);
    enqueue(&myq,6);
    enqueue(&myq,7);
    enqueue(&myq,5);
    enqueue(&myq,6);
    //enqueue(&myq,7);
   // enqueue(&myq,5);
    //enqueue(&myq,6);
  //  enqueue(&myq,7);
    //enqueue(&q,8);
    //enqueue(&q,9);
   y= dequeue(&myq);
   printf("%d",y);

}
