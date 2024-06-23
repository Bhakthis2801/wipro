//C program to demonstrate increment operator

#include<stdio.h>

int main()
{
        int a=5;

        printf("a = %d\n",a);//5
        printf("a = %d\n",++a);//pre-increment result : 6
        printf("a = %d\n",a++);//post-increment result : 6
        printf("a = %d\n",a);//7

        return 0;
}
