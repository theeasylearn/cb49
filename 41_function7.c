// write a function that find max number in array

#include <stdio.h>

int maxitem(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

void main()
{
    int numbers[100];
    int name[5] = {40,4,3,2,4};
    int n, max;

    printf("enter array size : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter number %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("%d",maxitem(numbers,n));
    printf("\n%d",maxitem(name,5));

    // printf("enter number 2 : ");
    // scanf("%d",&numbers[1]);
}