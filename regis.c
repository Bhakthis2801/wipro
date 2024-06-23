//C program to demonstrate register storage class

#include<stdio.h>

void func()
{
        register int x=10;//Declaring 'x' as register variable

        printf("Value of x inside func : x : %d\n",x);
}
int main()
{
        register int x=5;//Declaring 'x' as register variable

        printf("Value of x inside main before func call : x : %d\n",x);

        func();

        printf("Value of x inside main after func call : x : %d\n",x);

        return 0;
}
