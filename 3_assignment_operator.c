#include<stdio.h>
void main()
{
    int a=10,b=2;
    printf("\n a = %d b = %d",a,b);
    // a=a+b; 
    a+=b;
    printf("\n a = %d b = %d",a,b);

    // a=a-b;
    a-=b;
    printf("\n a = %d b = %d",a,b);

    // a=a*b;
    a*=b;
    printf("\n a = %d b = %d",a,b);

    // a=a/b;
    a/=b;
    printf("\n a = %d b = %d",a,b);

    // a=a%b;
    a%=b;
    printf("\n a = %d b = %d",a,b);

    
}