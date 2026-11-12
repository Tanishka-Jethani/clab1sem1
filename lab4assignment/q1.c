#include<stdio.h>
#include<string.h>
void rev(char *str){
int l =0;
int r = strlen(str) - 1;
while(l<r){
    char temp = str[l];
    str[l] = str [r];
    str[r] = temp;
    l++;
    r--;
}
}
int main()
{
    char str1[50];
    printf("enter the string\n");
    scanf(" %[^\n]",str1);
    char str2[50];
    printf("enter the string\n");
    scanf(" %[^\n]",str2);
    char str3[50];
    printf("the length of string is %lu \n ",strlen(str1));
    printf("the copied string is %s \n ",strcpy(str3,str1));
    printf("the concatenated string is %s \n",strcat(str3,str2));
    printf("the comparision of string is %d \n",strcmp(str1,str2));
    rev(str3);
    printf("the reverse string is %s \n",str3);

     
return 0;
}
