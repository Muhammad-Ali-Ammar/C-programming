#ifndef QUEUE_DOUBLE_LINKEDLIST_H_INCLUDED
#define QUEUE_DOUBLE_LINKEDLIST_H_INCLUDED
#include "linkedlist.h"


typedef struct
{
    linkedList list_object;
    int size;
}queue;


queue* create_queue();
int    queue_is_empty(queue *obj); // for not copying the whole array
int    queue_size(queue *obj);
void   enqueue(queue *obj, int data);
void   dequeue(queue *obj);
int    queue_front(queue *obj);
int    queue_back(queue *obj);




#endif // QUEUE_DOUBLE_LINKEDLIST_H_INCLUDED
