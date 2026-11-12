#include<stdio.h>

int main()
{
    char str[20];
    printf("enter the string \n");
    scanf("%s",str);
    int i =0,j;

    while(str[i]!='\0'){
         j = i+1;
       while(str[j]!='\0'){
        
        if(str[i]>str[j]){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
       
       }
        j++;
    }
       i++;
    }
    printf("the sorted string is %s\n",str);
    
return 0;
}
