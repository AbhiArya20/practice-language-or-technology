#include<string.h>
#include<stdio.h>
void x(char *str,int s,int e){
    if(s>=e)
    return;

    if(*(str+s)=='x'){
        char k= *(str+s);
        int j=s;
        int i=s+1;
        while (i<=e)
        {
           *(str+j)=*(str+i);
           j++;
           i++;
        }
        *(str+i+1)=k;
        
    }
  x(str,s+1,e);

}
int main()
{
    char str[100];
    gets(str);
    x(str, 0, strlen(str) - 1);
    printf("%s",str);
}