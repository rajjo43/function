#include<stdio.h>

int EvenorOdd(int num)
{
    if(num%2==0)
    return 1;
    else
    return 0;
}

int main()
{
    int x;
    printf("Enter a number : \n");
    scanf("%d",&x);
    if(EvenorOdd(x))
    printf("The number is even\n");
    else
    printf("The number is odd\n");
    return 0;
}