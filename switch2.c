
#include<stdio.h>

int main()
{
        char operator;
        double num1,num2,result;

        printf("Enter an operator (+, -, *, /): ");
        scanf("%c",&operator);

        printf("Enter two numbers :\n");
        scanf("%lf %lf",&num1,&num2);

        //Perform the operation based on the operator

        switch(operator)
        {
                case '+':
                        result=num1+num2;
                        printf("%.2lf + %.2lf = %.2lf\n",num1,num2,result);
                        break;

                case '-':
                        result=num1-num2;
                        printf("%.2lf - %.2lf = %.2lf\n",num1,num2,result);
                        break;

                case '*':
                        result=num1*num2;
                        printf("%.2lf * %.2lf = %.2lf\n",num1,num2,result);
                        break;

                case '/':
                        if(num2!=0)
                        {
                                result=num1/num2;
                                printf("%.2lf / %.2lf = %.2lf\n",num1,num2,result);
                        }
                        else
                        {
                                printf("Floating Point Exception/Divison by Zero Error\n");
                        }
                        break;

                default:
                        printf("Error! Invalid Operator\n");
                        break;
        }
        return 0;
}
