// concept of string
// 1d array of character is string
#include <stdio.h>
// create constant
#define SIZE 32
#define BIGSIZE 128

void main()
{
    // create 1d array of char type
    char name[SIZE], surname[SIZE], address[BIGSIZE];

    // input
    printf("Enter your name");
    scanf("%s", name);
    fflush(stdin);

    printf("Enter your surname");
    scanf("%s", surname);
    fflush(stdin);

    printf("Enter your address");
    gets(address); // with space input
    fflush(stdin);

    // display
    printf("\n name = %s surname = %s \n address = %s \n ", name, surname, address);

    // or
    puts(name);
    puts(surname);
    puts(address);
}