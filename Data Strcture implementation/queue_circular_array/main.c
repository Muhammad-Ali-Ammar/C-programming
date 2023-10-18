#include "queue_circular_array.h"



int main()
{
    queue *obj = create_queue();

    enqueue(obj,5);
    enqueue(obj,6);

    cout(queue_back(obj));
    cout(queue_front(obj));

    dequeue(obj);
    cout(queue_front(obj));

    dequeue(obj);
    cout(queue_front(obj));

    cout(obj->size);

}
