/*
    write a program to convert 24 hours format time and 12 hours format time and display it 
    steps
    ----------------------
    1 - create variable hours 
    2 - accept time into hours variable (hours 15)
    3 - check if time is above 11
        if hours<12 
            display hours with AM message
        if hours>11
            hours = hours - 12 (3)
            display hours with PM message 
    4 - display good bye 
*/
#include<stdio.h>
void main()
{
    float hours;
    printf("enter hours in 24 hours format");
    scanf("%f",&hours); //18.30

    if(hours<12)
    {
        printf("%.2f AM",hours);
    }

    if(hours>11)
    {
        hours = hours - 12; //6.30
        printf("%.2f PM",hours);
    }
    printf("\ngood bye");
}