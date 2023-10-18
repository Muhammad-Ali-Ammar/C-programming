#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define cout(x) printf("%d\n",x)


typedef struct stack
{
    int capcity;
    int idx;
    int *st;
}stack;


stack create_stack();
int stack_is_empty(const stack *s1);
int stack_capacity(const stack *s1);
int stack_top (const stack *s1);
void stack_pop(stack *s1);
void stack_push (stack *s1,int data);
int stack_size(const stack *s1);




#endif // STACK_H_INCLUDED
