
//C program to demonstrate call by reference

#include<stdio.h>

void swap(int *a, int *b); //Function Prototype

int main()
{
        int a=10,b=20;

        printf("Before Swapping, Value of a = %d and b = %d\n",a,b);

        swap(&a,&b);

        printf("After Swapping, Value of a = %d and b = %d\n",a,b);

        return 0;
}

void swap(int *a, int *b)
{
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;

        printf("Inside Swap Function, Value of a = %d and b = %d\n",*a,*b);
}
