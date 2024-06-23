
//User-defined Macros

//Object-like macros
#define PI 3.14159
#define GREETING "Wipro Training"

//Function-like macros
#define SQUARE(x) ((x) * (x))
#define CIRCLE_AREA(r) (PI * (r) * (r))

int main()
{
        printf("%s\n",GREETING);
        printf("Value of PI : %f\n",PI);

        int number=6;

        printf("Square of %d is %d\n",number,SQUARE(number));

        double radius=3.0;
        printf("Area of Circle with the radius %lf : %.2f\n",radius,CIRCLE_AREA(radius));

        return 0;
}
