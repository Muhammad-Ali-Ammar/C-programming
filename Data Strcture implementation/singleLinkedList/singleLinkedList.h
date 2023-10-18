#ifndef SINGLELINKEDLIST_H_INCLUDED
#define SINGLELINKEDLIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define cout(x) printf("%d ",x)

	/****************************************************************************
	*name of program : single linkedList...
	*****************************************************************************/


typedef struct node
{
    int data;
    struct node* next;

}node;

typedef struct linkedList
{
     node* first; // point not node

}linkedList;


void addFirst (linkedList* list,int value);
void addBack (linkedList* list , int value);
void displayAll(linkedList list);
char empty (linkedList list);
void removeFirst (linkedList* list);
void removeBack(linkedList* list);
int mx(linkedList); // return INT_MIN if empty
int mn(linkedList); // return INT_MAX if empty
int search (linkedList list, int value);
void displayAt (linkedList list , int pos);
void insertAt (linkedList* list , int pos, int data);
void deleteAt(linkedList* list , int pos);
void sortList(linkedList* list);


#endif // SINGLELINKEDLIST_H_INCLUDED
