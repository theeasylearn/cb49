// 5
// 1-odd
// 2-even

#include <stdio.h>

void check(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d - even", i);
        }
        else
        {
            printf("\n%d - odd", i);
        }

    }
}

void main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    check(n);

    // if(count%2==0){
    //     printf("%d - even",count);
    // }
    // else{
    //     printf("%d - odd",count);
    // }

    // count++;
    // if(count%2==0){
    //     printf("%d - even",count);
    // }
    // else{
    //     printf("%d - odd",count);
    // }
}