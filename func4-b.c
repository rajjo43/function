#include<stdio.h>

int evenorodd(int num)
{
    return(num & 1);
}

/*Let's say n1 is 5, which is 00000101 in binary, and 1 is 00000001 in binary.

   00000101  (n1)
&  00000001  (1)
-------------
   00000001
   bitwise AND operation is 00000001, which is 1 in decimal.
   the least significant bit of n1 is 1, indicating that the number is odd.

 if n1 were an even number, 
such as 8 (00001000 in binary),
 the bitwise AND operation would result in 00000000 (0 in decimal), 
indicating that the number is even.*/

int main(void)

{
    int x;
     printf("Enter a number : \n");
    scanf("%d",&x);
    if(evenorodd(x))
    printf("The number is odd\n");
    else
    printf("The number is even\n");
    return 0;

}