
//C program to find smallest and largest element of an array:

#include<stdio.h>

int main()
{
    int arr[10],size,smallest,largest;

    printf("Enter the size of the array :\n");
    scanf("%d",&size);

    printf("Enter the array elements :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    //Assume first array element as largest
    largest=arr[0];

    for(int i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    printf("Largest element is %d\n",largest);

    //Assume first element is the smallest
    smallest=arr[0];

    for(int i=0;i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("Smallest element is %d\n",smallest);

    return 0;
}
