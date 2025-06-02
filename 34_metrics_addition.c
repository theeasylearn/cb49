// write a program that add 2 metrics
// steps
// create metrics
// input from user
// addition of each position
// create answer metrics

#include<stdio.h>
#define ROW 2
#define COLUMN 2

void main()
{
    int metric1[ROW][COLUMN]={{1,2},
                              {3,4}};
    int metric2[ROW][COLUMN]={{10,20},
                              {30,40}};
    int metric3[ROW][COLUMN];

    metric3[0][0] = metric1[0][0]+metric2[0][0];
    metric3[0][1] = metric1[0][1]+metric2[0][1];
    metric3[1][0] = metric1[1][0]+metric2[1][0];
    metric3[1][1] = metric1[1][1]+metric2[1][1];


    printf("%d  %d\n%d  %d",metric3[0][0],metric3[0][1],metric3[1][0],metric3[1][1]);
}