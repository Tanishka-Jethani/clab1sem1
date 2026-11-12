#include<stdio.h>

int main()
{
   char a[15];
    char b[15];
     printf("enter the string \n");
     scanf(" %[^\n]",a);
    
     printf("enter the another string \n");
     scanf(" %[^\n]",b);
     char c[30];
     int i = 0;
     int count =0;
     while (a[i]!='\0'){
        c[i] = a[i];
        i++;
        count ++;
     }
     c[i]='\0';
     int j = 0;
     while (b[j]!='\0'){
        c[count] = b[j];
        j++;
        count++;
     }
     c[count]='\0';
     printf("the concatinate string is %s\n",c);

return 0;
}
/*
method 2





*/
