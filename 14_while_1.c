/*
    write a program to display following pattern (only one value in printf statement)
    1   2   3   4   5   6   .... 100
    steps
    ---------------------------
    declare variable number store 1 in it.
    display number // 1
    change variable num using mathematical expression
    number = number+1 //2
    display number //2
    number = number+1 //3
     display number
     number = number+1 //4
     display number
     number = number+1
     display number
*/
#include <stdio.h>
void main()
{
    int number = 1;
    while(number<=100)  //101
    {
        printf("%d ", number); // 4
        number = number + 1; // 4
    }
    printf("\n good bye");
}