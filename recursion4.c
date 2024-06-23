#include<stdio.h>

void sum(int);

int main()
{
    int a;
    printf("Enter a number =  ");
    scanf("%d", &a);
   
    sum(a);
    return 0;
}
 
void sum(int a)
{  
    static int answer = 0;
   
    if(a == 0)
   {  
       printf("The Sum is %d ",  answer);
       return ;
   }

    answer += a ;
    sum(a - 1);
}
