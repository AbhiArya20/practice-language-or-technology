#include<stdio.h>
#include<string.h>
union employees
{
    int ID;
    float marks;
    char name[20];
} ;
//
//typedef union student1
//{
//    int ID;
//    float marks;
//    char name[20];
//}s111,s222,s333;
//};
//union student1 s1,s2,s3;
int main()
{
    union employees s1 = {50, 4.7, "kumar"};
    // s1.ID=6;
    //s1.marks=54.6;
    printf("%.1f\n", s1.marks);
    printf("%d\n", s1.ID);
    printf("%s\n", s1.name);
}