
//To compile and run the program, we need to use -lm to link to the math library
//gcc misc.c -lm

#include<stdio.h>
#include<math.h>

int main()
{
        double num1=9.0,num2=2.0,num3=5.67;

        //Square root
        double result_sqrt = sqrt(num1);
        printf("The square root of %.2f is %.2f\n",num1,result_sqrt);

        //Power
        double result_pow = pow(num1,num2);
        printf("%.2f raised to the power of %.2f is %.2f\n",num1,num2,result_pow);

        //Floor
        double result_floor = floor(num3);
        printf("The floor of %.2f is %.2f\n",num3,result_floor);

        //Ceil
        double result_ceil = ceil(num3);
        printf("The ceil of %.2f is %.2f\n",num3,result_ceil);

        return 0;
}
