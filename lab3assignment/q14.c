#include<stdio.h>

int main()
{
     int n, key, count = 0;
    printf("enter n \n");
    scanf("%d", &n);
    int a[n];
    printf("enter elements of array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the number whose repetance u want to find  \n");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
           count++;
        }
    }
    printf("%d is repeated %d times \n",key,count);
    
return 0;
}
