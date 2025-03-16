#include <stdio.h>
int main()
{
    int a, b; //variable declare
    a = 7;    //variable initilization
    b = 2;
    printf(" a+b = %d\n", a + b);
    printf(" a-b = %d\n", a - b);
    printf(" a*b = %d\n", a * b); //No operator is assumed.
    printf(" a/b = %d\n", a / b);
    printf(" a/b = %d\n", a % b); // 5%2=1,-5%2=-1, 5%(-2)=1
} 

// 
/* 



*/

// rules
/*  int * int = int
    int * float = float

    Ex- 4*3=12
    Ex- int b=4.25*3=12.75 it will not 12;

*/

// Operator precedence               associative
         /*  
                1st   *   /   %         L-R
                2nd   +   -
                3rd   =

              if no paranthesis
        */

//pow(whose, power) to find power in <math.h> library, it return double