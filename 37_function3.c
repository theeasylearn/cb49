// write a function that take 2 argument starting and ending number and print table
// start-1
// end-5
// printtable(1,5)
// 1 x 1 = 1

#include <stdio.h>

void printtable(int start, int end)
{

    if (start < end)
    {
        for (int i = start; i <= end; i++)
        {
            for (int i = 1; i <= 10; i++)
            {
                printf("\n%d x %d = %d", start, i, start * i);
            }

            printf("\n-------------------\n");
            start++;
        }
    }

    else if (start>end)
    {
        for (int i = start; i >= end; i--)
        {
            for (int i = 1; i <= 10; i++)
            {
                printf("\n%d x %d = %d", start, i, start * i);
            }

            printf("\n-------------------\n");
            start--;
        }
    }
    
}

void main()
{
    int start;
    int end;

    printf("enter starting number : ");
    scanf("%d", &start);

    printf("enter ending number : ");
    scanf("%d", &end);

    printtable(start, end);

    // for(int i=1;i<=10;i++)
    // {
    //     printf("\n%d x %d = %d",start,i,start*i);
    // }

    // printf("\n-------------------\n");
    // start++;//3
    // for(int i=1;i<=10;i++)
    // {
    //     printf("\n%d x %d = %d",start,i,start*i);
    // }

    // ans = start*count;
    // printf("\n%d x %d = %d",start,count,ans);

    // count++;
    // ans = start*count;
    // printf("\n%d x %d = %d",start,count,ans);
}