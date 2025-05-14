/*
    write a program to calculate compound interest of given amount rate and year
    1   create variable amount,rate,year,interest
    2   accept input in amount,rate and year variable
        //                1000	10	    1
    3   calculate simple interest for 1 year  and store in interest variable
        interest (100) = (amount * rate * 1) /100
        amount (1100) = amount + interest

    4   calculate simple interest for 2 year  and store in interest variable
        interest (110) = (amount * rate * 1) /100
        amount (1210) = amount + interest

    5   calculate simple interest for 3 year  and store in interest variable
        interest (121) = (amount * rate * 1) /100
        amount (1331) = amount + interest

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