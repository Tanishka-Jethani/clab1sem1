#include<stdio.h>
 
int main()
{
    char str[20];
    printf("enter the string \n");
    scanf(" %[^\n]",str);
    int i =0;
    int countchar = 0,countwords = 1;

    while(str[i]!='\0'){
        if(str[i] == ' '){
           countwords++;
        }
       
        if(str[i]>=65 && str[i]<=90){
           countchar++;
        }
        else if(str[i]>=97 && str[i]<=122){
            countchar++;
        }

       i++;

    }
    


    printf("the number of char is %d and words are %d  \n",countchar,countwords);
return 0;
}

