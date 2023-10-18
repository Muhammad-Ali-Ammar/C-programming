#include "queue_using_circular_linkedlist.h"



int main()
{
    queue *qu= create_queue_circular_list();

    queue_enqueue(qu,5);
    queue_enqueue(qu,6);

    cout(queue_get_back(qu));


    return 0;
}
