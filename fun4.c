//with_arguments_without_return

#include<stdio.h>

void add(int x, int y);//Function Prototype

int main()
{
        int a=8,b=5;

        add(a,b);//Function Call/Invoking the function add

        return 0;
}

//Function Definition
void add(int x, int y)
{
        int sum=x+y;
        printf("Sum = %d\n",sum);
}
