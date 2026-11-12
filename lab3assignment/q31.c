#include<stdio.h>

int main()
{
    char a[15];
    char b[15];
     printf("enter the string \n");
     scanf(" %[^\n]",a);
     printf("enter the another string \n");
     scanf(" %[^\n]",b);
     int i =0;
     int flag = 0;
     while(a[i]!='\0' || b[i]!='\0'){
        if(a[i]!=b[i]){
        flag = 1;
        break;
        }
        i++;
     }

     if(flag == 1)
     printf("both string are not equal \n");
     else 
     printf("both are equal\n");
    
return 0;
}
