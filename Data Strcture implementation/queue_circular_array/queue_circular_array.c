#include "queue_circular_array.h"

queue* create_queue()
{
    queue* temp= malloc(sizeof(queue));
    temp->front = temp->back = -1;
    temp->size =0;
    temp->capcity = 50;
    temp->arr = malloc(temp->capcity * sizeof(int));


    return temp;
}

int queue_is_empty(queue *obj)
{
    return (obj->size == 0);
}

int queue_size(queue *obj)
{
    return (obj->size);
}

int queue_capcity (queue *obj)
{
    return (obj->capcity);
}

void enqueue(queue *obj, int data)  // end
{
        if(queue_is_empty(obj)) obj->front = obj->back = 0;
        else if ( (obj->back +1 ) % obj->capcity == obj->front   ) // full queue
        {
            printf("it's full"); return ;
        }

        else obj->back = (obj->back+1) %obj->capcity;

        obj->arr[obj->back] = data;
        ++ obj->size;
}

int queue_front(queue *obj)
{
    if(queue_is_empty(obj)) return INT_MIN;
    else return obj->arr[obj->front];
}

int queue_back(queue *obj)
{
    if(queue_is_empty(obj)) return INT_MIN;
    else return obj->arr[obj->back];
}

void dequeue(queue *obj)
{
    if(queue_is_empty(obj)) return ;
    else if ( obj->size==1) obj->back = obj->front = -1;
    else obj->front = (obj->front+1) %obj->capcity;

    --obj->size;

}
