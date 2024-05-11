#include<stdio.h>

int factorial(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    fact*=i;
    return fact;
}

double sumofseries()
{
    double sum=0;
    for(int i=1;i<=5;i++)
    sum+=(double)factorial(i)/i;
    return sum;
}

int main()
{
    sumofseries();
    printf("The sum of the series is : %.2lf\n",sumofseries());
    return 0;
}