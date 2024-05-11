#include<stdio.h>

int LargestElement(int arr[], int size)
{
    int maxvalue=arr[0];
    for(int i=1;i<size;i++){
    if(arr[i]>maxvalue){
    maxvalue=arr[i];}}
    return maxvalue;
}

int main()
{
    int array[20],n;
    printf("Input the number of elements to be stored in array :\n");
    scanf("%d",&n);
    printf("Input %d elements in the array\n",n);

    for(int i=0;i<n;i++){
    printf("Elements of -%d :",i);
    scanf("%d",&array[i]);}

    LargestElement(array,n);
    printf("The largest element in the array is : %d\n",LargestElement(array,n));
    return 0;
}