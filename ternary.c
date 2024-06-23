//C program to demonstrate ternary operator

#include<stdio.h>

int main()
{
        int age;

        printf("Enter your age :\n");
        scanf("%d",&age);

        (age>=18) ? printf("You can vote") : printf("You cannot vote");

        return 0;
}
