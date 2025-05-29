/*
    write a program to findout given value in sorted array
*/
#include <stdio.h>
void main()
{
    long numbers[10] = {100L, 200L, 300L, 400L, 500L, 600L, 1000L, 2000L, 4000L, 10000L};
    long search, position;
    for (int i = 0; i < 10; i++)
    {
        printf("%ld ", numbers[i]);
    }
    printf("\n enter number");
    scanf("%ld", &search);

    for (position = 0; position <= 4; position++)
    {
        if (search < numbers[position])
        {
            printf("value not found");
            break;
        }
        else if (search == numbers[position])
        {
            printf("value found %d",position+1);
            break;
        }
    }
    if (position == 5)
    {
        printf("value not found");
    }
}