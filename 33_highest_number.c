// write a program that gives highest number from array
// step
// 1) create array
// 2) input from user
// 3) find highest number

#include <stdio.h>
void main()
{
    int n;
    int high=0;
    int count = 0;
    int check;

    printf("enter size of array : ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter item%d : ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(numbers[i]>high){
            high=numbers[i];
        }
    }

    for(int i =0 ; i<n ;i++)
    {
        count = numbers[0];
        if(count==numbers[i])
        {
            check=1;
        }
        else{
            check=0;
            break;
        }
    }
    if(check==1)
    {
        printf("all are same....");
    }
    else if(check==0)
    {
        // printf("all are not same....");
        printf("highest value of array : %d", high);
    }

}