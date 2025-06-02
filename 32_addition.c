#include<stdio.h>
void main()
{
    int numbers[10];
    int sum = 0;

    for(int i=0;i<10 ; i++)
    {
        printf("enter item%d : ",i+1);
        scanf("%d",&numbers[i]);
    }

    // printf("enter item2 : ");
    // scanf("%d",&numbers[1]);

    // printf("enter item3 : ");
    // scanf("%d",&numbers[2]);

    for(int i=0 ; i<10 ; i++)
    {
        printf("%d ",numbers[i]);
    }

    for(int i=0 ; i<10 ; i++)
    {
        sum = sum+numbers[i];
    }

    printf("\ntotal sum : %d",sum);

}