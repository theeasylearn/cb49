// write a program that add 2 metrics
// steps
// create metrics
// input from user
// addition of each position
// create answer metrics

#include <stdio.h>
#define ROW 3
#define COLUMN 3

void main()
{
    // static initialization
    int a[ROW][COLUMN] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};
    int b[ROW][COLUMN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int c[ROW][COLUMN], i, J;
    for (J = 0; J < ROW; J++)
    {
        for (i = 0; i < COLUMN; i++)
        {
            c[J][i] = a[J][i] + b[J][i];
        }
    }

    for (J = 0; J < ROW; J++)
    {
        for (i = 0; i < COLUMN; i++)
        {
            printf("%5d", a[J][i]);
        }
        printf("\n");
    }
    for (J = 0; J < ROW; J++)
    {
        for (i = 0; i < COLUMN; i++)
        {
            printf("%5d", b[J][i]);
        }
        printf("\n");
    }
    for (J = 0; J < ROW; J++)
    {
        for (i = 0; i < COLUMN; i++)
        {
            printf("%5d", c[J][i]);
        }
        printf("\n");
    }
}