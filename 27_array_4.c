/* write a program to sort array into ascending order */
#include <stdio.h>
void main()
{
    // create array
    float result[5] = {50.2, 85.2, 75.2, 99.2, 65.2};
    float temp;
    // 0,1 0,2 0,3 0,4
    int position = 0;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i + 1; j <= 4; j++)
        {
            if (result[i] > result[j])
            {
                temp = result[i]; // 85.8
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }

    while (position <= 4)
    {
        printf("%5.2f \n", result[position]);
        position = position + 1;
    }
}