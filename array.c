//program to insert an array elements at a given position

#include<stdio.h>

int main()
{
	int arr[100];

	int size,element,position;

	printf("enter the size of the array :\n");
	scanf("%d",&size);

	printf("enter the array elements :\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("enter the element to be inserted :\n");
	scanf("%d",&element);

	printf("enter the position where element to be inserted :\n");
	scanf("%d",&position);

	if(size>=100)
	{
		printf("Array is full.Cannot insert more elements :\n");
		return 1;
	}

	if(position<0 || position>100)
	{
		printf("Invalid position:\n");
		return 1;
	}

	for(int i=size;i>position;i--)
	{
		arr[i]=arr[i-1];
	}

	arr[position]=element;

	size++;

	printf("Array elements after insertion are..\n");

	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");

	return 0;
}

