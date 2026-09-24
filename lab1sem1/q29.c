// PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.
//121 = 121 mtlb no. ko ulta bhi kardo toh bhi same no. ayee
#include<stdio.h>
//153...3
int main()
{
     int n ,digit,reverse=0,original;
     
     printf ("enter the value of number \n");
     scanf("%d",&n);
     original = n;
     while(n!=0){
        digit = n%10;
        //3..5
        reverse = reverse*10+digit;//30+5=350+1=351
        n = n/10;
        //...15
     }
     if(reverse == original ){
        printf("pallindrom no.\n");
     }
     else {
        printf("not a pallindrom no.\n");
     }

return 0;
}
