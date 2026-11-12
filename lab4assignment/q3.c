#include<stdio.h>

int main()
{
     char str[20];
     printf("enter the string \n");
     scanf(" %[^\n]",str);
     int i =0;
     int count = 0;
     while(str[i]!='\0'){
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
        count++;
        i++;
     }
     printf("the number of vovels in the string is %d \n",count);
return 0;
}
