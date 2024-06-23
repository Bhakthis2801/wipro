//without_arguments_with_returnvalue

#include<stdio.h>

int add();//Function Prototype

int main()
{
        int s=add();//Calling/Invoking the Function add

        printf("Sum = %d\n",s);

        return 0;
}

int add() //Function Definition
{
        int a=2,b=6;
        int sum=a+b;
        return sum;
}
