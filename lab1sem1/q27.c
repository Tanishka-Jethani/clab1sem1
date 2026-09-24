#include<stdio.h>
//PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.
int main()
{
    int n,flag = 0;
    printf("enter the value of a number \n");
    scanf("%d",&n);
    
        if(n==1){
            printf("neither prime nor composite \n");
        }
        else if(n==2){
            printf(" prime no.\n");
        }

         else {
        for( int i = 2;i<n ; i++){
            if(n%i==0){
            flag = 1;
            break;
            }
        }
            if(flag ==1){
                printf("not prime no.\n");

            }
            else{
                printf("prime no.\n");
            }
        }
    
return 0;
}
