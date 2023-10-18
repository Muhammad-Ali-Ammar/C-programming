#include "linkedlist.h"


int main()
{

    linkedList list = createList();

    addFirst(list,20);
    addFirst(list,2);
    addFirst(list,40);


   displayAll(list);

   printf("\n\n");

   sortList(list);

   displayAll(list);


}
