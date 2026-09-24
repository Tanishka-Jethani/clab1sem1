//PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .
#include<stdio.h>

int main(){
int n,i,num;
int max, secondmax;
printf("enter the number of elements u will put\n ");
scanf("%d",&n);
if(n<2){
    printf("enter atleast two numbers \n");
}
printf("enter %d numbers : \n",n);
scanf("%d",&max);
scanf("%d",&secondmax);
//arrange the first two numbers 
if(secondmax>max ){
    int temp = max;
    max = secondmax;
    secondmax = temp;
}
for (i=3;i<=n;i++){
    scanf("%d",&num);
    if(num>max){
        secondmax = max;
        max = num;
        
    }
    else if (num>secondmax){
        secondmax=num;
    }
    printf("maximum = %d\n",max);
    printf("second maximum = %d\n",secondmax);
    return 0;

}



     
return 0;
}
