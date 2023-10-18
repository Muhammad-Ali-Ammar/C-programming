#ifndef CIRCULAR_LINKED_LIST_H_INCLUDED
#define CIRCULAR_LINKED_LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define cout(x) printf("%d ",x)

	/****************************************************************************
	*name of program : circular linkedList...
	*****************************************************************************/


typedef struct node
{
    int data;
    struct node* next;

}node;

typedef struct linkedList
{
     node* cursor;
     int size;

}CircularLinkedList;


CircularLinkedList *create_circular_List();
int  circular_list_size(CircularLinkedList *list);
int  circular_list_is_empty (CircularLinkedList *list);

void circular_list_addBack (CircularLinkedList *list , int value);
void circular_list_addFirst (CircularLinkedList *list,int value);

int  circular_list_getFront (CircularLinkedList *list);
int circular_list_getBack(CircularLinkedList *list);

int  circular_list_advance (CircularLinkedList *list);

void circular_list_removeBack(CircularLinkedList *list);
void circular_list_removeFirst(CircularLinkedList *list);


void circular_list_displayAll(CircularLinkedList *list);
int  circular_list_mx(CircularLinkedList *list); // return INT_MIN if empty
int  circular_list_mn(CircularLinkedList *list); // return INT_MIN if empty
int  circular_list_search (CircularLinkedList *list, int value);
void circular_list_displayAt (CircularLinkedList *list , int idx);



#endif // CIRCULAR_LINKED_LIST_H_INCLUDED
