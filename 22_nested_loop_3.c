/* write a program to display below pattern (only one * in one printf statement)
 *
 * *
 * * *
 * * * *
 * * * * *
 */
#include <stdio.h>
void main()
{
    int space = 1;
    int row = 5;
    int astrik = 1;
    while(row>=1)
    {
        while (space <= row)
        {
            printf("  ");
            space = space + 1;
        }
        while(astrik<=(6 - row))
        {
            printf("* ");
            astrik++;
        }
        astrik=1;
        printf("\n");
        space = 1;
        row=row-1;
    }
}