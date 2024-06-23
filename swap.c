
//C program to demonstrate call be value

#include<stdio.h>

void swap(int a, int b); //Function Prototype

int main()
{
        int a=10,b=20;

        printf("Before Swapping, Value of a = %d b= %d\n",a,b);

        swap(a,b);//Calling/Invoking swap function

        printf("After Swapping, Value of a = %d b = %d\n",a,b);

        return 0;
}

//Function Definition
void swap(int a, int b)
{
        int temp;
        temp=a;
        a=b;
        b=temp;

        printf("Inside the Swap Function, Value of a = %d and b = %d\n",a,b);
}
