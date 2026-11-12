#include<stdio.h>

int main()
{
    char str[15];
    printf("enter the string \n");
    scanf("%s",str);
    char k;
    printf("enter the character which u want to replace by the another character \n");
    scanf(" %c",&k);
    char c;
    printf("enter the character which u want to put  \n");
    scanf(" %c",&c);
    int i =0;
    while(str[i]!='\0'){
        if(str[i]==k){
            str[i] = c;
        }
        i++;
    }
   
    printf("the new string is %s\n",str);
    
return 0;
}
