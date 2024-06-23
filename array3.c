
//C program to search and print the number of occurrences in an array:

#include<stdio.h>

int main()
{
        int element,count=0;

        int arr[10];

        printf("Enter the elements into an array\n");
        for(int i=0;i<10;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Enter the element to be searched\n");
        scanf("%d",&element);

        for(int i=0;i<10;i++)
        {
                if(element==arr[i])
                {
                        count++;
                }
        }
        if(count<=0)
        {
                printf("Element %d is not found\n",element);
        }
        else
        {
                printf("Element %d occurs %d time(s)\n",element,count);
        }
        return 0;
}
