#include<stdio.h>

int main()
{
        int a=10;

        //Pointer Declaration
        int *ptr; //* is Dereferencing Operator. ptr is an integer pointer

        //Pointer Initialization
        ptr=&a;

        printf("Value of a without using the pointer is %d\n",a);
        printf("Value of a with using a pointer is %d\n",*ptr);

        printf("Address of a without using the pointer is %p\n",&a);
        printf("Address of a with using the pointer is %p\n",ptr);

        printf("Address of integer ptr is %p\n",&ptr);

        return 0;
}
