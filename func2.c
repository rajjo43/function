#include<stdio.h>

double square(double b);

int main()
{
    int x;
    double s;
    printf("Enter x:\n");
    scanf("%d",&x);
    s=square(x);
    printf("Square of the %d is %.2f\n",x,s);
    return 0;
}

double square(double b)
{
    return(b*b);
}