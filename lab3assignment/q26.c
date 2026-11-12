#include<stdio.h>
int stringlength(char str[]){
    int i =0;
    while(str[i]!='\0'){
        i++;
    }
return i;
}

int main()
{  
    char b[100];
    printf("enter string \n");
    scanf(" %[^\n]",b);
    printf("string length is %d \n",  stringlength(b));
  
return 0;
}
