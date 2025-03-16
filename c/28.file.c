#include <stdio.h>

int main()
{
   FILE *ptr = NULL;
   char string[34];
  ptr=fopen("myfile.txt", "r");
   fclose(ptr);
   //fprintf to print into file
   //fscanf to take from file
  //fputc(char,file ptr)
  //fputs()
  //fgetc()int fgets(char*s,int x ,*ptr)
  //fgets()
   printf("%s", __DATE__);
   printf("%s", __TIME__);
   printf("%s", __FILE__);
   printf("%s", __LINE__);
   printf("%s", __STDC__);
   return 0;
}
//r=read
//w=over write/creat
//a=to add line
//r+=read+write
//w+=over read+write/creat
//a+=to add line read+write