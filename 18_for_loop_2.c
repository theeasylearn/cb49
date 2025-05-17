// write a program to findout whether given number is perfect or not
/*
    steps
    1   create variable number(6),divisor,reminder,sum
    2   accept number from user into number ==(6)
    3   store 1 in divisor & store 0 into sum
    4   reminder(0) = number(6) % divisor(1)
    5   if reminder is zero then
        5.1 sum(1) = sum + divisor
    6   divisor = divisor + 1

    7   reminder(0) = number(6) % divisor(2)
    8   if reminder is zero then
        8.1 sum(3)= sum + divisor(2)
    9   divisor = divisor + 1

    10   reminder(0) = number(6) % divisor(3)
    11  if reminder is zero then
        11.1 sum(6) = sum + divisor
    12  divisor = divisor + 1
*/
#include <stdio.h>
void main()
{
    int number, divisor, reminder, sum;
    printf("Enter number");
    scanf("%d", &number);
    for(divisor=1,sum=0;divisor<number;)
    {
        reminder = number % divisor;
        if (reminder == 0)
        {
            sum = sum + divisor;
        }
        divisor++; // postfix increment
    }
    if(sum == number)
    {
        printf("this is perfect number");
    }
    else 
    {
        printf("this is not perfect number");
    }
}