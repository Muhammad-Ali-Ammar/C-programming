#include "singleLinkedList.h"

void addFirst (linkedList *list,int value)
{
    node* newNode = (node*) malloc(sizeof(node));

    newNode->data = value;
    newNode->next = list->first;

    list->first = newNode;
}

void addBack (linkedList* list , int value)
{
    if(empty(*list)) return addFirst(list,value);

    node* temp = list->first;

    while(temp->next) temp= temp->next;

    node* newNode = (node*) malloc(sizeof(node));

    newNode->data= value;
    newNode->next = NULL;

    temp->next = newNode;

}
char empty (linkedList list)
{
    return (list.first==0);
}

void displayAll(linkedList list)
{
    node* temp = list.first;

    while(temp != NULL)
    {
        cout(temp->data);
        temp=temp->next;
    }
}

void removeFirst (linkedList* list)
{
    if(empty(*list)) return;

    node* temp = list->first;

    list->first = temp->next;

    free(temp);
}

void removeBack(linkedList* list)
{
    if(empty(*list)) return;

    if(list->first->next == NULL) return removeFirst(list);

    node* temp = list->first;
    while(temp->next->next) temp= temp->next;

    free(temp->next);
    temp->next = NULL;
}

int mx(linkedList list)
{
    if(empty(list)) return INT_MIN;
    int result = INT_MIN;

    node*temp = list.first;
    while(temp)
    {
        result = (temp->data > result)? temp->data : result;
        temp=temp->next;
    }

    return result;
}

int mn(linkedList list)
{
    if(empty(list)) return INT_MAX;
    int result = INT_MAX;

    node*temp = list.first;
    while(temp)
    {
        result = (temp->data < result)? temp->data : result;
        temp=temp->next;
    }

    return result;
}

int search (linkedList list, int value)
{

    int idx =-1;
    node* temp= list.first;

    while(temp)
    {
        ++idx;

        if (temp->data == value) return idx;
        temp= temp->next;
    }

    return -1;
}

void displayAt (linkedList list , int pos)
{
    if(empty(list)) return;

    node* temp = list.first;

    while(--pos && temp->next) temp = temp->next;

    if(pos==0) cout(temp->data);
}

void insertAt (linkedList* list , int pos, int data)
{

    if(pos == 1) return addFirst(list,data);
    if(empty(*list)) return;

    node* temp = list->first;
    --pos;
    while(--pos && temp->next) temp=temp->next;

    if(pos ==0)
    {
        node* newNode = (node*) malloc(sizeof(node));
        newNode->data= data;
        newNode->next = temp->next;
        temp->next = newNode;
    }


}

void deleteAt(linkedList* list , int pos)
{
    if(empty(*list) || pos <1) return;

    if(pos==1) return removeFirst(list);

    node* temp = list->first;
    --pos;
    while(--pos && temp->next) temp= temp->next;

    if (pos ==0 && temp->next != NULL)
    {
        node* temp2 = temp->next;
        temp->next = temp->next->next;
        free(temp2);

    }
}

void sortList(linkedList* list)
{
    if(empty(*list) || list->first->next == NULL ) return;

    node* i ;

    if(list->first->data  > list->first->next ->data) // first node gnb b3d
    {
        node * temp = list->first->next;
        list->first->next = temp->next;
        temp->next= list->first;
        list->first = temp;
    }

    for (i=list->first; i->next; i=i->next) // first node with others ( msh gnb b3d )
    {
        if(list->first->data > i->next ->data)
        {
            node* temp= i->next;

            i->next = list->first;

            list->first->next = temp->next;
            temp->next = i;
            list->first = temp;
        }
    }

    node* j;

    for(i=list->first; i->next->next ;i=i->next) // from second node
    {
        for(j = i->next ; j->next; j=j->next )
            {
                if(i->next->data > j->next->data)
                {

                    if ( i->next->next == j->next) // gnb b3d ?
                    {
                       node* t1 = j->next;
                       j->next = t1->next;
                       t1->next =j;
                       i->next = t1;
                       j= t1;
                    }

                    else // msh gnb b3d
                    {
                        node* t1 =i->next;
                        node* t2 = j->next;
                        node* t3 = t2->next;

                        t2->next= t1->next;
                        t1->next=t3;

                        j->next = t1;
                        i->next = t2;
                    }


                }
            }


    }


}
