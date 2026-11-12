#include<stdio.h>
 
int main()
{
    char str[20];
    printf("enter the string \n");
    scanf(" %[^\n]",str);
    int i =0;
    int lowercase = 0,uppercase = 0,digits =0,symbols=0;

    while(str[i]!='\0'){
        if(str[i]>=65 && str[i]<=90){
            uppercase++;
        }
         else if(str[i]>=97 && str[i]<=122){
            lowercase++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digits++;
        }
        else{
            symbols++;
        }
        i++;

    }
    printf("the number of uppercase %d, lowercase %d,digits %d,symbols %d \n",uppercase,lowercase,digits,symbols);
return 0;
}
