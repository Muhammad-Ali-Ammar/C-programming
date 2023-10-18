#ifndef QUEUE_USING_CIRCULAR_LINKEDLIST_H_INCLUDED
#define QUEUE_USING_CIRCULAR_LINKEDLIST_H_INCLUDED

#include "circular_linked_list.h"

typedef struct
{
    CircularLinkedList *list_pointer;
}queue;

queue *create_queue_circular_list ();
int queue_is_empty(queue *obj);
int  queue_size(queue *obj);
void   queue_enqueue(queue *obj, int data);
void   queue_dequeue(queue *obj);
int    queue_get_front(queue *obj);
int    queue_get_back(queue *obj);



#endif // QUEUE_USING_CIRCULAR_LINKEDLIST_H_INCLUDED
