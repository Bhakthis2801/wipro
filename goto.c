#include<stdio.h>

int main()
{
        int x=0;

        printf("Starting the loop...\n");

        //Label for goto
start_loop:
        x++;
        printf("x is now %d\n",x);

        //If x is less than 5, jump back to start_loop label
        if(x<=5)
        {
                goto start_loop;
        }

        printf("Loop finished\n");

        return 0;
}
