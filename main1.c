#include<stdio.h>

extern int globalvariable;

extern void externalfunction();

int main()
{
        printf("Value of the global variable : %d\n",globalvariable);

        externalfunction();

        return 0;
}
