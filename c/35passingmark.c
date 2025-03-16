#include <stdio.h>
int main()
{
    int math , physics, chemistry;
    printf("enter your marks in maths physics chemistry out off 100 respctively\n");
    scanf("%d%d%d", &math,&physics,&chemistry);
    int total = math+physics+chemistry;
    
    if (total>=120&& math>=33&& physics>=33&& chemistry>=33)
    {
        printf("PASS\n");
    }
    else{
        printf("FAIL");
    }
}
