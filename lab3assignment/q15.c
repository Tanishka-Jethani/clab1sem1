#include<stdio.h>
void evenodd(int n){
    if(n%2==0)
    printf("%d is even \n",n);
    else
    printf("%d is odd \n",n);

}

int main()
{
    int n;
    printf("enter the value of number \n");
    scanf("%d",&n);
    evenodd(n);
     
return 0;
}
