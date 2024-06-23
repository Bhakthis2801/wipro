#include<stdio.h>

int main()
{
        char name[100];
        printf("Enter the Name :\n");
        fgets(name,sizeof(name),stdin);

        printf("Name :\n");
        puts(name);

        return 0;
}
