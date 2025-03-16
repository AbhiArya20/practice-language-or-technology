#include<stdio.h>
int func()
{
    static int yu=2;
     yu++;
     printf("%d\n", yu);
}
int main()
{
    static int static1=4;
    static int static2;
    printf("%d\n",static1);
    printf("%d\n",static2);
    func();
    func();
    func();
    func();
    func();
    func();
    

}