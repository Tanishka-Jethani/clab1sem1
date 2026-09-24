#include<stdio.h>

int main()
{
     char ch;
     int l;
     printf("enter the character ");
     scanf("%c",&ch);
     l = ch;
     printf("%d",l);
     l = ((ch>=65 ) && (ch<=97))? printf("upper case "):printf("lower case");

return 0;
}
