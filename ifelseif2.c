
#include<stdio.h>

int main()
{
        int score;

        printf("Enter the score :\n");
        scanf("%d",&score);

        //Determine the classification based on the score
        if(score>=75)
        {
                printf("FCD(First class with distinction)\n");
        }
        else if(score>=60)
        {
                printf("First class\n");
        }
        else if(score>=50)
        {
                printf("Second class\n");
        }
        else if(score>=40)
        {
                printf("Pass\n");
        }
        else
        {
                printf("Fail\n");
        }
        return 0;
}
