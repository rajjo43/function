#include<stdio.h>

int sum(int a,int b)
{
    int total=a+b;
    return total;
}

int main()
{
    int x,y,s;
    printf("Enter x & y:\n");
    scanf("%d %d",&x ,&y);
    s=sum(x,y);
    printf("The total sum of x & y is: %d\n",s);
    return 0;
}