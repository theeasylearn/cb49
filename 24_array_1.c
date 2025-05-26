/*
    concept of 1d 1array in c

*/
#include <stdio.h>
void main()
{
    // create array
    int age[5];

    // store values in array
    // store 18 into 1st position
    age[0] = 18;
    // store 20 into 2nd position
    age[1] = 20;
    // store 25 at last position
    age[4] = 25;
    // display
    printf("1st position %d \n", age[0]);
    printf("2nd position %d \n", age[1]);
    printf("3rd position %d \n", age[2]);
    printf("last position %d \n", age[4]);
}