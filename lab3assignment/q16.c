#include<stdio.h>
void palindrome(int n){
    int rev =0,original;
    original =n;
    while(n!=0){
        rev = rev*10+(n%10);
        n = n/10;

    }
    if(rev==original)
    printf("palindrome \n");
    else 
    printf("not palindrome \n");
}
int main()
{
     int n;
     printf("enter the value of number \n");
     scanf("%d",&n);
     palindrome(n);
return 0;
}
