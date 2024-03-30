

/**
 * main.c
 */
#include <stdio.h>
int sum(int num1 , int num2)
{
    return num1 + num2;
}
int main(void)
{
    int x=2,y=3;
    int z=sum(x,y);
    printf("%d",z);
    return 0;
}
