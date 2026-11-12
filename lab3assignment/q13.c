#include <stdio.h>

int main()
{
    int n, key, flag = 0, pos;
    printf("enter n \n");
    scanf("%d", &n);
    int a[n];
    printf("enter elements of array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the key u want to find \n");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            pos = i;
            break;
        }
    }
    if (flag == 1)
    {
        printf("key found at index %d \n", pos);
    }
    else
        printf("key not found \n");
    return 0;
}
