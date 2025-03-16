#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, guess, count = 1;
    srand(time(0));
    n = rand() % 100 + 1;
     printf("Enter a number\n");
    do
    {
       
        scanf("%d", &guess);
        if (n == guess)
        {
            break;
        }
        if (n < guess)
        {
            printf("less than\n");
            count++;
        }

        if (n > guess)
        {
            printf("greater than\n");
            count++;
        }
    } while (guess != n);
    printf("%d", count);
}