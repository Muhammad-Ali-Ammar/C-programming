#include "linkedlist.h"

linkedList createList()   // create an object 3adi such as s1

{
    linkedList list;

    list.first = (node*) malloc(sizeof(node));
    list.end =   (node*) malloc(sizeof(node));

    list.first->next = list.end;
    list.end->prev = list.first;


    return list;
}

void addFirst (linkedList list,int value)
{
    node* newNode = (node*) malloc(sizeof(node));
    newNode->data = value;

    newNode ->next = list.first->next;
    newNode ->prev = list.first;


    list.first->next->prev =newNode;
    list.first->next = newNode;

}

void addBack (linkedList list , int value)
{
    node* newNode =(node*) malloc(sizeof(node));
    newNode ->data = value;

    newNode->next = list.end;
    newNode->prev = list.end->next;

    list.end->prev->next = newNode;
    list.end->prev = newNode;

}
void displayAll(linkedList list)
{
    node* temp = list.first;

    while(temp->next != list.end)
    {

     cout(temp->next->data);
     temp= temp->next;
    }
}


char empty (linkedList list)
{
    return  ( list.first->next == list.end );
}

void removeFirst (linkedList list)
{
    if(empty(list)) return;

    node* temp = list.first->next;
    list.first->next = temp->next;
    temp->next->prev = list.first;

    free (temp);
}

void removeBack(linkedList list)
{
    if(empty(list)) return ;

    node *temp=list.end->prev;

    list.end->prev = temp->prev;
    temp->prev->next = list.end;

    free(temp);
}

int mx(linkedList list)
{
    if(empty(list)) return INT_MIN;

    int result = list.first->next->data;

    node* temp = list.first->next;

    while(temp->next != list.end)
        {
            result = (result >= temp->next->data)? result : temp->next->data;
            temp=temp->next;
        }

    return result;
}

int mn(linkedList list)
{
    if(empty(list)) return INT_MAX;

    int result = list.first->next->data;

    node* temp = list.first->next;

    while(temp->next != list.end)
        {
            result = (result < temp->next->data)? result : temp->next->data;
            temp=temp->next;
        }

    return result;
}

int search (linkedList list, int value)
{

    if(empty(list)) return -1;
    int idx = 0;
    node* temp = list.first->next;

    while(temp != list.end)
    {

        if( temp->data == value) return idx;

        temp=temp->next;
        ++idx;
    }

    return -1;
}


void displayAt (linkedList list , int pos)
{
    // pos = 0 --> nta wa2f fel mkaan
    if(empty(list) || pos<1) return;

    node* temp = list.first;
    while(pos && temp->next != list.end)
    {
        temp=temp->next;
        --pos;
    }
    if(pos==0 )
        cout(temp->data);

}


void insertAt (linkedList list , int pos, int value)
{
    if(pos<1) return ;

    node* temp = list.first;
    while(pos && temp != list.end)
    {
        temp=temp->next;
        --pos;
    }
    if(pos==0 )
        {
            node* newNode = (node*) malloc(sizeof(node));
            newNode->data=value;

            newNode->next = temp;
            newNode->prev= temp->prev;

            temp->prev->next= newNode;
            temp->prev = newNode;
        }

}

void deleteAt(linkedList list , int pos)
{
    if(empty(list) || pos<1) return;

    node* temp = list.first;
    while(pos && temp->next != list.end)
    {
        temp=temp->next;
        --pos;
    }
    if(pos==0 )
    {
        temp->prev->next=temp->next;
        temp->next->prev = temp->prev;

        free(temp);
    }


}


void swap (node** i, node** j)
{
    node* t1= (*i)->prev;
    node* t2= (*j)->next;

    t1->next=(*i)->prev=(*j);
    t2->prev=(*j)->next=(*i);

    (*j)->prev = t1;
    (*i)->next = t2;

    // after swapping --> nta n2lt nodes
    // 5leet j wara wl i 2odaam

    t1=(*i);
    *i = *j;
    *j = t1;

}

void sortList(linkedList list)
{
    if(empty(list)) return;

    node* i , *j;
    for(i=list.first->next; i != list.end->prev; i=i->next)
    {
        for(j=i->next; j!=list.end;j=j->next)
        {
            if( (i->data) > (j->data) ) swap(&i,&j);
        }
    }
}



int getFront (linkedList list)
{
    if(empty(list)) return INT_MIN;

    else return list.first->next->data;
}


int getBack(linkedList list)
{
    if(empty(list)) return INT_MIN;

    else return list.end->prev->data;
}