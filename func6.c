#include<stdio.h>

void DecimaltoBinary(int decimalnum)
{
    int i=0 ,j,binary[40];
    while(decimalnum>0){
    binary[i]=decimalnum%2;
    decimalnum=decimalnum/2;
    i++;}

    printf("The binary value of the decimal number is : \n");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter a decimal a number:\n");
    scanf("%d",&n);
    DecimaltoBinary(n);
    return 0;
}
