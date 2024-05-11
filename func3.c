#include<stdio.h>

int swap(int *a, int *b)
{
    int s;
    s=*a;
    *a=*b;
    *b=s;
}

int main()
{
    int n1,n2;
    printf("Input first number:\n");
    scanf("%d",&n1);
    printf("Input second number:\n");
    scanf("%d",& n2);
    printf("Before swapping : n1= %d & n2 = %d\n",n1,n2);

    swap(&n1,&n2);
    printf("After swapping : n1= %d & n2= %d\n",n1,n2);
}