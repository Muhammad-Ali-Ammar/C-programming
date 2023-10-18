#include "circular_linked_list.h"

CircularLinkedList *create_circular_List()
{
    CircularLinkedList *temp = malloc(sizeof(CircularLinkedList));
    temp->size = 0;
    temp->cursor = NULL;
    return temp;

}


int circular_list_size ( CircularLinkedList * list)
{
    return list->size;
}

int circular_list_is_empty (CircularLinkedList *list)
{
    return  list->cursor == NULL;
}


void circular_list_addBack (CircularLinkedList *list , int value)
{
    node* newNode =(node*) malloc(sizeof(node));
    newNode ->data = value;

    if(circular_list_is_empty(list))
    {
        list->cursor = newNode;
        newNode->next = newNode;
    }

    else
    {
        newNode->next = list->cursor->next;
        list->cursor->next = newNode;
        list->cursor = newNode;

    }

    ++list->size;
}


int circular_list_advance (CircularLinkedList *list)
{
    if(circular_list_is_empty(list)) return 0;

    list->cursor = list->cursor->next;

    if(list->cursor == list->cursor->next) // if there's only one node
        return 2;
    else
        return 1;
}



void circular_list_addFirst (CircularLinkedList *list,int value)
{
    node* newNode = (node*) malloc(sizeof(node));
    newNode->data = value;

    if(circular_list_is_empty(list))
    {
        list->cursor = newNode;
        newNode->next = newNode;
    }

    else
    {
        newNode->next = list->cursor->next;
        list->cursor->next = newNode;
    }

    ++list->size;

}



int circular_list_getBack(CircularLinkedList *list)
{
    if(circular_list_is_empty(list)) return INT_MIN;

    return list->cursor->data;
}

int  circular_list_getFront (CircularLinkedList *list)
{
    if(circular_list_is_empty(list)) return INT_MIN;

    else
        return list->cursor->next->data;
}

void circular_list_removeBack(CircularLinkedList *list)
{
    if(circular_list_is_empty(list)) return ;

    else if (list->size == 1)
    {
        free(list->cursor);
        list->cursor = NULL;

    }
    else
    {
        node *temp = list->cursor->next;
        while(temp->next != list->cursor)
            temp=temp->next;

        temp->next = list->cursor->next;
        free(list->cursor);
        list->cursor = temp;
    }


        --list->size;
}


void circular_list_displayAll(CircularLinkedList *list)
{
    if(circular_list_is_empty(list)) return;

     node *current=list->cursor->next, *temp = current;

     do
     {
         cout(current->data);
         current= current->next;
     }while(current != temp);
}



int  circular_list_mx(CircularLinkedList *list)
{
    int result = INT_MIN;
    if(circular_list_is_empty(list) ) return result;

    node *current = list->cursor->next;
    node *temp = current;

    do
    {
        if(current->data > result)
            result = current->data;
        current = current->next;

    }while(current != temp);

    return result;
}


int  circular_list_mn(CircularLinkedList *list)
{
    int result = INT_MAX;
    if(circular_list_is_empty(list) ) return result;

    node *current = list->cursor->next;
    node *temp = current;

    do
    {
        if(current->data < result)
            result = current->data;
        current = current->next;

    }while(current != temp);

    return result;
}

int  circular_list_search (CircularLinkedList *list, int value)
{
    if(circular_list_is_empty(list)) return -1;
    node *current = list->cursor->next;
    node *temp = current;
    int counter = 0;

    do
    {
        if(current->data == value)
            return counter;
        ++counter;
        current= current->next;
    }while(current != temp);

    return -1;
}

void circular_list_displayAt (CircularLinkedList *list , int idx)
{

    if(idx > list->size-1 || idx <0)  return;


    node *current = list->cursor->next;

    for(int i = 0; i<idx; ++i, current= current->next);

    cout(current->data);
}



void circular_list_removeFirst(CircularLinkedList *list)
{
    if(circular_list_is_empty(list)) return ;

    else if (list->size == 1)
    {
        free(list->cursor);
        list->cursor = NULL;

    }
    else
    {
        node *temp = list->cursor->next;
        list->cursor->next = list->cursor->next->next;
        free(temp);
    }


        --list->size;
}

