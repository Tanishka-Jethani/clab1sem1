#include<stdio.h>

int main()
{
      int n,m;
    printf("enter n \n");
    scanf("%d",&n);
    printf("enter m \n");
    scanf("%d",&m);
    int a[n][m],b[n][m],c[n][m];
    printf("enter the elements of array a\n");
    for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
        scanf("%d",&a[i][j]);
    } 
}
    printf("enter the elements of array b\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
        scanf("%d",&b[i][j]);
        }
    } 
     for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
       c[i][j]=a[i][j]-b[i][j];
        }
    } 
    printf("the substraction of the matrices is \n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
      printf(" %d ",c[i][j]);
        }
        printf("\n");
    } 
return 0;
}
