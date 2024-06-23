#include<stdio.h>

int main()
{
	int num,fact=1,i;
	printf("enter the number to find the factorial\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return 0;
}

