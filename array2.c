#include<stdio.h>

int main()
{
        int arr[10];

        printf("Enter 10 interger values :\n");

        //Initializing/Inserting the elements into an array
        for(int i=0;i<10;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Array elements are...\n");

        //Printing the array elements
        for(int i=0;i<10;i++)
        {
                printf("%d\n",arr[i]);
        }

        return 0;
}
