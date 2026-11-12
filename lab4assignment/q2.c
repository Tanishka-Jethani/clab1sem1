#include<stdio.h>

int main()
{
    char str[25];
    printf("enter the string \n");
    scanf(" %[^\n]",str);

     char a;
     printf("enter the character u want to search in the string \n");
     scanf(" %c",&a);
    int i =0;
    int flag =0;
     while(str[i]!='\0'){
        if(str[i]==a){
            flag = 1;
            break;
        }
        i++;
     }
     if(flag == 1){
        printf("the character is present \n");
     }
     else 
     printf("not presnt\n");
return 0;
}
