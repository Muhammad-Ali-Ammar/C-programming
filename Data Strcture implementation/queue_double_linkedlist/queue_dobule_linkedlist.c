#include "queue_double_linkedlist.h"

queue* create_queue()
{
    queue *temp= malloc(sizeof(queue));
    temp->list_object = createList();
    temp->size=0;

    return temp;
}

int queue_is_empty(queue *obj)
{
    return (empty(obj->list_object));
}

int    queue_size(queue *obj)
{
    return obj->size;
}


void enqueue(queue *obj,int data)
{
    addBack(obj->list_object,data);
    ++obj->size;
}

void dequeue(queue *obj)
{
    if (obj->size != 0)
    {
        removeFirst(obj->list_object);
        --obj->size;

    }
}

int    queue_front(queue *obj)
{
    return getFront(obj->list_object);
}


int    queue_back(queue *obj)
{
    return getBack(obj->list_object);

}
