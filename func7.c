#include<stdio.h>

int PrimeNumber(int num)
{
    for(int i=2;i<=(num/2);i++)
    if(num%i==0)
    return 1;
    else
    return 0;
}

int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    if(PrimeNumber(n))
    printf("%d is not a prime number\n",n);
    else
    printf("%d is a prime number\n",n);
    return 0;
}