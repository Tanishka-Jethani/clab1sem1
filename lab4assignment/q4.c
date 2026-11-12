#include<stdio.h>

int main()
{
    char str[20];
     printf("enter the string \n");
     scanf(" %[^\n]",str);
     int i =0;
     while(str[i]!='\0'){
        if(str[i] >= 97 && str[i] <=122){
            str[i] = str[i]-32;
        }
        i++;
     }
     printf("the string after converting the lowercase to upper case is : \n %s \n",str);

return 0;
}
