//with_arguments_with_returnvalue

#include<stdio.h>

int add(int a, int b); //Function Prototype

int main()
{
        int a=8,b=12;
        printf("Sum = %d\n",add(a,b));

        int s1=add(20,30);//Function call/Invoking
        printf("Sum = %d\n",s1);

        return 0;
}

//Function Definition
int add(int a, int b)
{
        int sum=a+b;
        return sum;
}
