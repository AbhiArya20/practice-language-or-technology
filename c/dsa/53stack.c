#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack
{
    int top;
    unsigned capacity;
    int *arr;
};
struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}
int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}
bool isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}
int Top(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Empty stack");
        return 0;
    }
    return stack->arr[stack->top];
}

void push(struct Stack *stack, int val)
{
    if (isFull(stack))
    {
        printf("Stack Full");
        return;
    }
    stack->top++;
    stack->arr[stack->top] = val;
}
void pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Empty stack");
        return;
    }
    stack->top--;
}
// int main()
// {
//     struct Stack *stack = createStack(100);
//     push(stack, 1);
//     push(stack, 2);
//     push(stack, 3);
//     push(stack, 4);
//     push(stack, 5);
//     printf("%d\n", Top(stack));
//     pop(stack);
//     printf("%d\n", Top(stack));
//     pop(stack);
//     printf("%d\n", Top(stack));
//     pop(stack);
//     printf("%d\n", Top(stack));
//     pop(stack);
//     printf("%d\n", isEmpty(stack));
// }