#include<stdio.h>

int main()
{
    char str[15];
    printf("enter the string \n");
    scanf("%s",str);
    int i =0;
    printf("the ascii value for the word given is \n");
    while(str[i]!='\0'){
        printf("%d ",str[i]);
        i++;
    }

    
return 0;
}
