/*
    write a program to accept value in array and display it

*/
#include <stdio.h>
void main()
{
    // create array
    int age[5];
    int position=0;
    //input
    // 0 to 4
    while(position<=4) //5<=4
    {
        printf("Enter value for %d position",position+1);
        scanf("%d", &age[position]);
        position=position+1; //1
    }
    position=0;
    // 0 to 4
    while(position<=4)
    {
        printf("%d \n",age[position]);
        position=position+1;
    }
   
}