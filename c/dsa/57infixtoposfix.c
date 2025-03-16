#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
struct Stack1
{
    char *arr;
    int top;
    unsigned capacity;
};

struct Stack1 *createStack(unsigned capacity);
int isFull(struct Stack1 *stack);
bool isEmpty(struct Stack1 *stack);
int Top(struct Stack1 *stack);

void push(struct Stack1 *stack, int val);
void pop(struct Stack1 *stack);

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '+')
        return 1;
    else
        return -1;
}
void intTopos(char *str)
{
    struct Stack1 *stack = createStack(100);
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            printf("%c", str[i]);
        }
        else if (str[i] == '(')
        {
            push(stack, str[i]);
        }
        else if (str[i] == ')')
        {
            while (!isEmpty(stack) && Top(stack) != '(')
            {
                printf("%c", Top(stack));
                pop(stack);
            }
            if (!isEmpty(stack))
                pop(stack);
        }
        else
        {
            while (!isEmpty(stack) && precedence(Top(stack)) > precedence(str[i]))
            {
                printf("%c", Top(stack));
                pop(stack);
            }
            push(stack, str[i]);
        }
    }
    while (!isEmpty(stack))
    {
        printf("%c", Top(stack));
        pop(stack);
    }
}
int main()
{
    char str[100];
    gets(str);
    fflush(stdin);
    intTopos(str);
}

struct Stack1 *createStack(unsigned capacity)
{
    struct Stack1 *stack = (struct Stack1 *)malloc(sizeof(struct Stack1));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (char *)malloc(stack->capacity * sizeof(char));
    return stack;
}
int isFull(struct Stack1 *stack)
{
    return stack->top == stack->capacity - 1;
}
bool isEmpty(struct Stack1 *stack)
{
    return stack->top == -1;
}
int Top(struct Stack1 *stack)
{
    if (isEmpty(stack))
    {
        printf("Empty stack");
        return 0;
    }
    return stack->arr[stack->top];
}

void push(struct Stack1 *stack, int val)
{
    if (isFull(stack))
    {
        printf("Stack Full");
        return;
    }
    stack->top++;
    stack->arr[stack->top] = val;
}
void pop(struct Stack1 *stack)
{
    if (isEmpty(stack))
    {
        printf("Empty stack");
        return;
    }
    stack->top--;
}