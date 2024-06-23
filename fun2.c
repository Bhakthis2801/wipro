//withouta_arguments_without_returnvalue

#include<stdio.h>

void add();//Function Prototype/Declaration

int main()
{
        add();//Calling/invoking add function
        add();
        add();
        return 0;
}

//Function Definition
void add()
{
        int a=5,b=8;
        int sum=a+b;

        printf("Sum = %d\n",sum);
}
