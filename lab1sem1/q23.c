#include<stdio.h>

int main(){
    int base,exponential;
    printf("enter the value of base and exponent");
    scanf(" %d %d",&base,&exponential);
    //if base 2 and exponent 3 then result will be 8
    float result = 1;
    if(exponential<0){
    for(int i = 1;i<=(-1*exponential);i++)
    {
        if(exponential<0){
            result = ((1.0/(base)))*result;
        }
        
    }

}
else
    for(int i = 1;i<=(exponential);i++)
    {
        result = base*result;

    }
    printf("the value of the number is %f \n",result);
    //2
    //2*2
    //2*2*2

return 0;
}
