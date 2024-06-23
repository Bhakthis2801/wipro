#include<stdio.h>

int main()
{
        int age;
        float height;
        char name[50];

        printf("Enter your age :\n");
        scanf("%d",&age);

        printf("Enter your height in meters :\n");
        scanf("%f",&height);

        printf("Enter your name :\n");
        scanf("%s",name);

        printf("Name : %s, Age : %d, Height : %.2f meters\n",name,age,height);

        return 0;
}
