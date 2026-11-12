#include<stdio.h>
#include<limits.h>
int main()
{
     int a[3][3];
     printf("enter the elements \n");
     for(int i =0 ;i<3;i++){
        for(int j =0;j<3;j++){
     scanf("%d",&a[i][j]);
     }
     printf("\n");
    }
     int max = INT_MIN;
     int min = INT_MAX;
     for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            if(max<a[i][j])
            max = a[i][j];
            if(min>a[i][j])
            min = a[i][j];
        }
   
     }
     
     printf("the max value is %d and min is %d\n",max,min);

return 0;
}
