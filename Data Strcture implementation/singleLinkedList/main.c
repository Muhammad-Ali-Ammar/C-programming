#include "singleLinkedList.h"

int main()
{
    linkedList list ={NULL};

    addFirst(&list,50);
    addFirst(&list,100);
    addFirst(&list,-1);
    addFirst(&list,100);







    displayAll(list);
    printf("\n");


    sortList(&list);
    displayAll(list);

}
