#include<stdio.h>
void character(char a){

    if (a == 'a' ||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("%c is vowel\n",a);
    }
    else 
    printf("%c is not a vowel\n",a);

}
int main()
{
     char c;
     printf("enter the character \n");
     scanf("%c",&c);
     character(c);
return 0;
}
