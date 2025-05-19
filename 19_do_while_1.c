/*
    write a program to print following pattern
    //100 81  64 49 36 25 16 9 4 1
    //steps
    1   create variable count & store 10
    create variable square

    calculate square of count
        square = count(10) * count (10)
    display square  (100)
    count = count - 1

    calculate square of count
        square = count(9) * count (9)
    display square
    count = count - 1

    calculate square of count
        square = count(8) * count (8)
    display square
    count = count - 1
*/
#include <stdio.h>
void main()
{
    int count = 10;
    int square;

    do
    {
        square = count * count;
        printf("%10d", square); // 100
        count--;
    }while(count>=1);
}