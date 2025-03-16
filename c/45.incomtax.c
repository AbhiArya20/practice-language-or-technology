#include <stdio.h>
int main()
{
    int salary;
    float tax = 0;
    printf("Enter salary in lakh\n");
    scanf("%d", &salary);
    if (salary <= 250000)
    {
        printf("No need to pay any tax");
    }
    else if (salary > 250000 && salary <= 500000)
    {
        tax += (salary - 250000) * 0.05;
        printf("%0.2f", tax);
    }
    else if (salary > 500000 && salary <= 1000000)
    {
        tax += (salary - 500000) * 0.2;
        tax += (500000 - 250000) * 0.05;
        printf("%0.2f", tax);
    }
    else if (salary > 1000000)
    {
        tax += (salary - 1000000) * 0.3;
        tax += (salary - 500000) * 0.2;
        tax += (500000 - 250000) * 0.05;
        printf("%0.2f", tax);
    }
    return 0;
}