//C program to check if a person is eligible to vote or not.

#include<stdio.h>

int main()
{
        int age;

        printf("Enter your age :\n");
        scanf("%d",&age);

        if(age>=18)
        {
                printf("You are eligible to vote in India\n");
        }

        printf("This statement is executed irrespective of if\n");

        return 0;
}
