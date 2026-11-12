#include<stdio.h>

int main()
{
     char str[15];
     printf("enter the string \n");
     scanf(" %[^\n]",str);
     char a[15];
     int i = 0;
     while(str[i]!='\0'){
        a[i]=str[i];
        i++;
     }
     a[i]='\0';
     printf("the copied string is %s ",a);
return 0;
}
