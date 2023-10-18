#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>

#define cout(x) printf("%d ",x)

	/****************************************************************************
	*name of program : double linkedList...
	*****************************************************************************/


typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;

}node;

typedef struct linkedList
{
     node* first; // point not node
     node* end;   // point not node


}linkedList;


linkedList createList();
void addFirst (linkedList list,int value);
void addBack (linkedList list , int value);
void displayAll(linkedList list);
char empty (linkedList list);
void removeFirst (linkedList list);
void removeBack(linkedList list);
int mx(linkedList); // return INT_MIN if empty
int mn(linkedList); // return INT_MAX if empty
int search (linkedList list, int value);
void displayAt (linkedList list , int pos);
void insertAt (linkedList list , int pos, int data);
void deleteAt(linkedList list , int pos);
void swap (node** t1, node** t2); // (if node* ) ,, bta5od copy .. nta 3ayz t8er mkan al i w j al asleen
void sortList(linkedList list);
int getFront (linkedList list);
int getBack(linkedList list);

#endif // LINKEDLIST_H_INCLUDED
