#include<stdio.h>

void add(int a,int b);

int main()
{
	printf("Demo for step command in GDB\n");
	int a=10,b=20;

	add(a,b);
	return 0;
}
void add(int a,int b)
{
	printf("sum of %d and  %d is %d\n",a,b,a+b);
}
