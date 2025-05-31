/*
    write a program to accept value in 2d array and then display it
    task
    it should store total at last position  of column in each row 
    also display total 
*/
#include <stdio.h>
// create constant
#define ROW 7
#define COLUMN 3
void main()
{
    // create 2d array
    int matrix[ROW][COLUMN];
    int c, r;
    // input
    for (r = 0; r < ROW; r++)
    {
        for (c = 0; c < COLUMN; c++)
        {
            printf("Enter data for %d row %d column", r + 1, c + 1);
            scanf("%d", &matrix[r][c]);
        }
    }

    for (r = 0; r < ROW; r++)
    {
        for (c = 0; c < COLUMN; c++)
        {
            printf("%5d", matrix[r][c]);
        }
        printf("\n");
    }
}