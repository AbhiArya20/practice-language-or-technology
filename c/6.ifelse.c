#include <stdio.h>
int main()
{
    int a;
    printf("enter your age\n");
    scanf("%d", &a);
    if (a >= 18)
    {
        printf("you can vote\n");
    }
    else if(a<18 && a>=10)
    {
        printf("you can't vote\n");
    }
    else{
        printf("your are kids");
    }
    
}

// You can use only if also and nested too.

//  if you write if(a=18) it will execute untill else a=0; but this is wrong way.

// else is optinal.

// No need of { } if single line in if/else statement



