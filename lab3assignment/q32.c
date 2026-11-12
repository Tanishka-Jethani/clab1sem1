#include<stdio.h>

int main()
{
     char str[15];
     printf("enter the string \n");
     int count = 0; //
      scanf(" %[^\n]",str);
     int i = 0;
     

     while(str[i]!='\0'){
        count++;
        i++;
     }
     int half = count/2;
     printf("%d",count);
     for(int i =0;i<half ;i++){
        char temp = str[i];
        str[i] = str[count-1];
        str[count-1] = temp;
        count--;
     }
     printf("the reverse string is %s\n",str);

return 0;
}
