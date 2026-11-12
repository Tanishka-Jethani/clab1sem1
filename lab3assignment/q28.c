#include<stdio.h>

int main()
{
     char str[15];
     printf("enter the string \n");
     scanf(" %[^\n]",str);
     int i = 0;
     int count = 0;

     while(str[i]!='\0'){
         count++;
         i++;
     }
     printf("the length of string is %d ",count);
     
return 0;
}
