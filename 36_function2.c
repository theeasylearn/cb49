// write a function that add 2 numbers
// with argument without return value function

#include<stdio.h>

void addition(int a,int b)
{
    printf("\n%d",a+b);
}

void main()
{
    int n1,n2;

    printf("enter number 1 : ");
    scanf("%d",&n1);

    printf("enter number 2 : ");
    scanf("%d",&n2);

    addition(10,20);

    addition(3,4);

    addition(n1,n2);
}