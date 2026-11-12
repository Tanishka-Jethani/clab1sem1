#include<stdio.h>
void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}
int main()
{
     int a,b;
     printf("enter value of a and b\n");
     scanf("%d%d",&a,&b);
     printf(" values are a = %d and b = %d \n",a,b);
     swap(&a,&b);
     printf("the value after swapping is a = %d and b = %d \n",a,b);

return 0;
}
