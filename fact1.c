#include<stdio.h>

int main()
{
        int num,i;

        printf("Enter a positive integer :\n");
        scanf("%d",&num);

        printf("Factors of %d are :\n",num);

        //Logic
        for(i=1; i<=num;i++)
        {
                if(num%i==0)
                {
                        printf("%d\n",i);
                }
        }
        return 0;
}
