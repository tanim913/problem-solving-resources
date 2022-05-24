#include <stdio.h>
#define stack_max 100

typedef struct
{
    int top;
    int data [stack_max];

} Stack;

void push (Stack *s, int item)
{

    if(s -> top < stack_max)
    {

        s->data[s -> top] = item; ///initially s->top is 0
        s->top = s-> top +1;
    }
    else
    {
        printf("Stack is full\n");
    }
}

int pop(Stack *s)
{
    if(s-> top ==0)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        s->top = s-> top -1;
        return s->data[s->top];/// when new value is pushed old value would be replaced
    }

}

int main ()
{
    Stack my_stack;

    my_stack.top = 0;

    push(&my_stack, 50);
    printf("Top value %d\n", my_stack.top);

    push(&my_stack, 60);
    printf("Top value %d\n", my_stack.top);

    push(&my_stack, 70);
    printf("Top value %d\n", my_stack.top);

    push(&my_stack, 80);
    printf("Top value %d\n", my_stack.top);


    printf("%d\n",pop(&my_stack));
    printf("Top value %d\n", my_stack.top);

    printf("%d\n",pop(&my_stack));
    printf("Top value %d\n", my_stack.top);

    printf("%d\n",pop(&my_stack));
    printf("Top value %d\n", my_stack.top);

    printf("%d\n",pop(&my_stack));
    printf("Top value %d\n", my_stack.top);

    printf("%d\n",pop(&my_stack));
    printf("Top value %d\n", my_stack.top);

    return 0;



}
