
#include<stdio.h>

void fun(); //Function Prototype/Declaration
void fun2();

int main()
{
        printf("I am inside int main()\n");

        fun();//Calling/Invoking the function name
        fun();
        fun();
        fun();
        fun();
        fun2();

        printf("Back to int main()\n");

        return 0;
}

//Function Definition/Body of the Function
void fun()
{
        printf("Euro 2024 is going on in GERMANY\n");
}

void fun2()
{
        printf("ICC T20 World Cup is going on in USA/West Indies\n");
}
