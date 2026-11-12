#include<stdio.h>

int main()
{
     int n,m,p,q;
    printf("enter n \n");
    scanf("%d",&n);
    printf("enter m \n");
    scanf("%d",&m);
    printf("enter p \n");
    scanf("%d",&p);
    printf("enter q \n");
    scanf("%d",&q);
    if(m!=p){
        printf("multiplication not possible \n");
        return 0;
    }
    int a[n][m],b[p][q],c[n][q];
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
             c[i][j] =0;
            for(int k =0;k<m;k++){
       c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    } 
    printf("the multiplication of matrices is \n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
      printf(" %d ",c[i][j]);
        }
        printf("\n");
    } 
return 0;
}
