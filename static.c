//C program to demostrate static storage class
//static storage class is used to retain the values between the function calls

#include<stdio.h>

void func()
{
        static int x=0; //Declaring 'x' as static variable
        printf("Inside func : x : %d\n",x);
        x++;
}
int main()
{
        static int x=5; //Declaring 'x' as static variable

        printf("Inside main, before calling func : x : %d\n",x);

        func();
        func();
        func();
        func();
        func();

        printf("Inside main, after calling func multiple times : x : %d\n",x);

        return 0;
}
