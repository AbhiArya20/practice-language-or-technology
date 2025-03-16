#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

struct Stack
{
    int top;
    unsigned capacity;
    int *arr;
};
struct Stack *createStack(unsigned capacity);
int isFull(struct Stack *stack);
bool isEmpty(struct Stack *stack);
int Top(struct Stack *stack);
void push(struct Stack *stack, int val);
void pop(struct Stack *stack);
void insertAtBottoM(struct Stack* stack,int temp){
    if (isEmpty(stack))
    {
        push(stack,temp);
        return;
    }
    
int temp2=Top(stack);
pop(stack);
insertAtBottoM(stack,temp);
push(stack,temp2);

}
void reverse(struct Stack *stack)
{ 
    if(isEmpty(stack)){
        return;
    }
    int temp= Top(stack);
    pop(stack);
    reverse(stack);
    insertAtBottoM(stack,temp);
   
}

int main()
{
    struct Stack *stack = createStack(100);
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    // while (!isEmpty(stack))
    // {
    //   printf("%d ",Top(stack));
    //   pop(stack);
    // }
    
    reverse(stack);
//   printf("ok");
    while (!isEmpty(stack))
    {
      printf("%d ",Top(stack));
      pop(stack);
    }

}

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