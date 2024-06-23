//C program to demonstrate logical operator

#include<stdio.h>

int main()
{
        int a=5,b=5,c=10,result;

        result=(a==b) && (c>b);
        printf("(a==b) && (c>b) is %d\n",result);//1

        result=(a==b) && (c<b);
        printf("(a==b) && (c<b) is %d\n",result);//0

        result=(a==b) || (c<b);
        printf("(a==b) || (c<b) is %d\n",result);//1

        result=(a!=b) || (c<b);
        printf("(a!=b) || (c<b) is %d\n",result);//0

        result=!(a!=b);
        printf("!(a!=b) is %d\n",result);//(a!=b)-->0 !0 is 1

        result=!(a==b);
        printf("!(a==b) is %d\n",result);//(a==b)--->1 !1 is 0

        return 0;
}
