/*
    write a program to findout given number is prime number or not 

    
*/
#include <stdio.h>
void main()
{
    float amount, rate, interest;
    int year,count;

    printf("enter amount");
    scanf("%f", &amount);

    printf("enter rate");
    scanf("%f", &rate);

    printf("enter year");
    scanf("%d", &year);
    count=1; 

    while(count<=year) 
    {
        interest = (amount * rate * 1) / 100;
        amount = amount + interest;
        count = count + 1;
    }

    printf("last year interest = %.2f \namount = %.2f", interest, amount);
}