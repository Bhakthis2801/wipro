
//C Program to insert an array element at a given position

#include<stdio.h>

int main()
{
    int arr[100];

    int size,element,position;

    printf("Enter the size of the array :\n");
    scanf("%d",&size);

    printf("Enter the array elements :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }

    printf("Enter the element to be inserted :\n");
    scanf("%d",&element);

    printf("Enter the position where element to be inserted :\n");
    scanf("%d",&position);

    if(size>=100)
    {
        printf("Array is full. Cannot insert more elements\n");
        return 1;
    }

    if(position<0 || position>100)
    {
        printf("Invalid Position\n");
        return 1;
    }

    for(int i=size;i>position;i--)
    {
        arr[i]=arr[i-1];
    }
 
    arr[position]=element;

    size++;

    printf("Array Elements after Insertion are...\n");

    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
   
    return 0;
}
