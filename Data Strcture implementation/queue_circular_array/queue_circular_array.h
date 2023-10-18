#ifndef QUEUE_CIRCULAR_ARRAY_H_INCLUDED
#define QUEUE_CIRCULAR_ARRAY_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define cout(x) printf("%d\n",x)

typedef struct
{
    int front;
    int back ;
    int size;
    int capcity;
    int *arr;

}queue;


queue* create_queue();
int    queue_is_empty(queue *obj); // for not copying the whole array
int    queue_size(queue *obj);
int    queue_capcity(queue *obj);
void   enqueue(queue *obj, int data);
void   dequeue(queue *obj);
int    queue_front(queue *obj);
int    queue_back(queue *obj);




#endif // QUEUE_CIRCULAR_ARRAY_H_INCLUDED
