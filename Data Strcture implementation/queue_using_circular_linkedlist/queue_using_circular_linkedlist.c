#include "queue_using_circular_linkedlist.h"

queue *create_queue_circular_list ()
{
    queue * temp = (queue*)malloc(sizeof(queue));

    temp->list_pointer = create_circular_List();


    return temp;
}


int queue_is_empty(queue *obj)
{
    return circular_list_is_empty(obj->list_pointer);
}

int    queue_size(queue *obj)
{
    return obj->list_pointer->size;
}


void   queue_enqueue(queue *obj, int data)
{
    circular_list_addBack(obj->list_pointer,data);
}


void   queue_dequeue(queue *obj)
{
    circular_list_removeFirst(obj->list_pointer);
}

int    queue_get_front(queue *obj)
{
    return circular_list_getFront(obj->list_pointer);
}

int    queue_get_back(queue *obj)
{
    return circular_list_getBack(obj->list_pointer);
}

