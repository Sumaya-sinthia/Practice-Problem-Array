#include<stdio.h>
int main()
{
    int arr[100],X,n,i,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter searched element: ");
    scanf("%d",&X);

    for(i=0;i<6;i++)
    {
        if(arr[i]==X)
        {
            count++;
        }
    }

    printf("Occurrence of numbers:%d",count);
    return 0;
}


