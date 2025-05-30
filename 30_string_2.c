/*
    write a program to count vowels in given string
    step
    1) create string variable name and store apple
       create variable count and store 0
    2) compare letter at 0th position against a,e,i,o,u
        if(name[0] == 'a' or name[0] == 'e' or name[0] == 'i' or name[0] == 'o'  or name[0] == 'u')
        3) increase count by 1
    4) compare letter at 1th position against a,e,i,o,u
        if(name[1] == 'a' or name[1] == 'e' or name[1] == 'i' or name[1] == 'o'  or name[1] == 'u')
        4) increase count by 1

*/
#include <stdio.h>
#include <ctype.h> 
#define SIZE 32
void main()
{
    char name[SIZE],letter;
    int count = 0;
    printf("Enter your name");
    scanf("%s", name);
    // printf("%s", name);
    for (int i = 0; i <= SIZE && name[i] !='\0'; i++)
    {
        letter = tolower(name[i]);
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        {
            count++;
        }
    }
    printf("no of vowels = %d", count);
}