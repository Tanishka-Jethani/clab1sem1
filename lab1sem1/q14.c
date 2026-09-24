#include<stdio.h>

int main()
{
    char c;
    printf("enter character: ") ;
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    printf("capital letters ");
    else if (c>='a' && c<='z')
    printf ("small letters ");
    else if (c>='0' && c<= '9'){
        printf("digit\n");
    }
    else 
    printf("symbol");

    printf("%c \n", c);
return 0;
}
//it will store only first character even if u write the whole sting
