#include <stdio.h>
int main ()
{
    int a, sumd, b, c, d;
    printf("Enter a Number:");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    c=c%10;
    sumd=b+c+d;
    printf("Sum of Numbers are %d",sumd);
}