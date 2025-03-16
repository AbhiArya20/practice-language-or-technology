#include<stdio.h>
#include<stdlib.h>

int main()
{
   printf("%s",__DATE__);
   printf("%s",__TIME__);
   printf("%s",__FILE__);
   printf("%s",__LINE__);
   printf("%s",__STDC__);
return 0;
}