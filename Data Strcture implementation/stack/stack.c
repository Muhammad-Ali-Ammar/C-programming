#include "stack.h"

stack create_stack()
{
    stack s1 ={50,0};

    s1.st= (int*) malloc( 50 *sizeof(int));

    return s1;

}

int stack_is_empty(const stack *s1)
{
    if(s1->idx == 0) return 1;
    else return 0;
}

int stack_size(const stack *s1)
{
    return s1->idx;
}

int stack_capacity(const stack *s1)
{
    return s1->capcity;
}

int stack_top (const stack *s1)
{
    if(stack_is_empty(s1)) return INT_MIN;
    else return(s1->st[s1->idx-1]);
}

void stack_pop(stack *s1)
{
    if(stack_is_empty(s1)) return;
    --(s1->idx);
}


void stack_push(stack *s1,int data)
{
    if(s1->idx == s1->capcity)  //double the size if it's full
    {
        s1->capcity+=50;
        s1->st=realloc(s1->st,s1->capcity*sizeof(int));
        if(s1->st == NULL) {printf("no memory for doubling the size"); return;}

    }

     s1->st[s1->idx++] = data;

}
