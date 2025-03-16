#include <stdio.h>
#include <string.h>
struct student
{
    int ID;
    float marks;
    char name[20];
} s1, s2, s3;

//struct employees
//{
//    int ID;
//    float marks;
//    char name[20];
//};
//struct employees s11,s22,s33;
//
//
union employees
{
    int ID;
    float marks;
    char name[20];
} s111, s222, s333;
//
//typedef union student1
//{
//    int ID;
//    float marks;
//    char name[20];
//}s111,s222,s333;
//}uni;//typedef
//union student1 s1,s2,;


int main()
{
    struct student s1; //= {5, 45.7, "Abhishek"};
    s1.ID=6;
    s1.marks=54.6;
    printf("%d\n", s1.ID);
    printf("%.1f\n", s1.marks);
    printf("%s\n", strcpy(s1.name, "kumar"));

   // union employees s111 = {50, 4.7, "kumar"};
   // printf("%d\n", s1.ID);
   // printf("%.1f\n", s1.marks);
   // printf("%s\n", s1.name);

    typedef int i;
    i t = 4;
    printf("example of typedef %d", t);
}