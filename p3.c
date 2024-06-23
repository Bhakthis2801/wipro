#include<stdio.h>

int main()
{
        //Pre-defined C Macros
        printf("Today's Date : %s\n",__DATE__);
        printf("Time : %s\n",__TIME__);
        printf("Line Number : %d\n",__LINE__);
        printf("File Name : %s\n",__FILE__);
        printf("Line Number : %d\n",__LINE__);
        printf("STDC : %d\n",__STDC__);

        return 0;
}
