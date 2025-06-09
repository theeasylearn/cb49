// write a function that covert celcius to ferenhit
// F = (C * 1.8) + 32

#include<stdio.h>

float getferenhit(int c)
{
    int f;
    f = (c*1.8)+32;

    return f;
}

// °C = (°F - 32) * 5/9

float getcelsius(float f){
    return (f - 32) * 5/9 ;
}

void main()
{   
    float ferenhit;
    ferenhit = getferenhit(10);
    printf("%f",ferenhit);

    printf("\n%f",getferenhit(30));

    printf("\n%f",getcelsius(20.5));
}