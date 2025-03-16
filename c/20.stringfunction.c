#include<stdio.h>
#include<string.h>

void function()
{
 
    char str[]={"Abhishek "};
    char str1[]={"kumar"};
    char s3[20];
  
    puts(strcat(str, str1));//join two string str1 into str
  
    printf("%d\n",strlen(str));//gives length
    puts(strrev(str));//reverse the string
   puts(strcpy(s3,str));//copy str in s3

   puts(strcmp(str, str1));// to compare and return 0 if same 1 if no str ACII first miss match of str is more than else -1
   
}
void task()
{
    char i[20];
    char j[20];
    printf("enter a name\n");
    gets(i);
    printf("enter his bff's name\n");
    gets(j);

printf("%s is the friend of %s", i,j);
}
int main()
 {
     function();
     task();
 }

 //if two scanf is used one after one then fflush(stdin); between them