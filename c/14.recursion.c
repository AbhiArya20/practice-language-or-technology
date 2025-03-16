#include <stdio.h>
int rec(int a)//function definition
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return (a * rec(a-1));//recurcive call
    }
}
int main()
{
    int b;
    printf("enter whose factorial to find\n");
    scanf("%d", &b);
    printf("the factorial is %d", rec(b));//function call
}

//function 
// if you want define function after int main() you have to give function prototype(declare) before main function

// you can call as much funtion in main or any other function

// only one return value

// name rule same as variable name


// According function parameter
/*  
        call by value       
                if you is change in function no change in original value

        call by reference   
                if you change then also change in original value
*/