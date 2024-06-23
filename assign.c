
#include<stdio.h>

int main()
{
        int a=5,c;

        c=a;
        printf("c = %d\n",c);//c=5

        c+=a;//c=c+a//5+5=10//c=c+a;
        printf("c = %d\n",c);//10

        c-=a;
        printf("c = %d\n",c);//5

        c*=a;
        printf("c = %d\n",c); //25

        c/=a;
        printf("c = %d\n",c);//5

        c%=a;
        printf("c = %d\n",c);//0

        return 0;
}
