#include<stdio.h>

int main()
{
    char str[15];
    printf("enter the string \n");
    scanf("%s",str);
    int count = 0;
    int i = 0;
    while(str[i]!='\0'){
        count ++;
        i++;
    }
    int h = count-1;
    int l = 0;
    int flag = 1;
    while(l<h){
        if(str[l]!=str[h]){
        flag = 0;
        break;
        }
        l++;
        h--;

    }
    if(flag == 1){
        printf("palindrome");
    }
    else
    printf("not a palindrome");
    

return 0;
}
