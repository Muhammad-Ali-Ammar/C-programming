#include "queue_double_linkedlist.h"

int main()
{

   queue *obj = create_queue();

   enqueue(obj,5);
   enqueue(obj,6);
   enqueue(obj,7);

   cout(queue_back(obj)); //7
   cout(queue_front(obj)); //5


    return 0;
}
