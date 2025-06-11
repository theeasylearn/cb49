#include <stdio.h>
// create union
// first we create our own type
union marriage
{
    char isMarried; // 1 byte
    int children;   // 2 bytes
}; // 2 bytes
void main()
{
    // then we create variable of our own type
    union marriage m1;
    printf("enter t if you are married f if not");
    scanf("%c", &m1.isMarried);

    printf("isMarried %c children %d", m1.isMarried, m1.children);

    printf("\n how many children?");
    scanf("%d", &m1.children);

    printf("isMarried %c children %d", m1.isMarried, m1.children);
}