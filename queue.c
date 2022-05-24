#include <stdio.h>
#define queue_size 100

typedef struct
{
    int data [queue_size+1];
    int head, tail;

} Queue;

void enqueue (Queue *q, int item)
{
    if(((q->tail+1) % (queue_size+1)) == q->head)
    {
        printf("Queue is full..");
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail+1) % (queue_size+1);
}


int dequeue (Queue *q)
{
    int item;
    if(q->tail == q->head)
    {
        printf("queue is empty\n");
        return -1;
    }

    item = q->data[q->head];
    q->head = (q->head+1) % (queue_size+1);
    return item;
}



int main ()
{

    Queue my_q;

    my_q.head = 0;
    my_q.tail = 0;

    enqueue(&my_q,50);
    printf("tail : %d\n",my_q.tail);
    enqueue(&my_q,70);
    printf("tail : %d\n",my_q.tail);
    enqueue(&my_q,90);
    printf("tail : %d\n",my_q.tail);
    enqueue(&my_q,110);
    printf("tail : %d\n",my_q.tail);

    printf("%d\n",dequeue(&my_q));
    printf("%d\n",dequeue(&my_q));
    printf("%d\n",dequeue(&my_q));
    printf("%d\n",dequeue(&my_q));
    printf("%d\n",dequeue(&my_q));

}
