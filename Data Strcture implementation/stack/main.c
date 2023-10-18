#include "stack.h"



int main()
{

    stack s1=create_stack();

    stack_push(&s1,5);

    cout(stack_size(&s1));
    cout(stack_top(&s1));

    stack_pop(&s1);

    cout(stack_top(&s1));

    return 0;
}
