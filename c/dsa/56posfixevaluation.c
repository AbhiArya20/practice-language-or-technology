#include "53stack.c"
#include <math.h>
#include <string.h>
void pref(char *str)       
{
    int k = strlen(str);
    struct Stack *stack = createStack(100);
    for (int i =0; i <k; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            push(stack, str[i] - '0');
        }
        else
        {
            int op2 = Top(stack);
            pop(stack);
            int op1 = Top(stack);
            pop(stack);
            switch (str[i])
            {
            case '+':
                push(stack, op1 + op2);
                break;

            case '-':
                push(stack, op1 - op2);
                break;

            case '*':
                push(stack, op1 * op2);
                break;

            case '/':
                push(stack, op1 / op2);
                break;

            case '^':
                push(stack, pow(op1, op2));
                break;
            }
        }
    }
    printf("%d", Top(stack));
}

int main()
{
    char str[100];
    gets(str);
    fflush(stdin);
    pref(str);
}