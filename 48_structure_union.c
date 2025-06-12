#include <stdio.h>
struct person
{
    char fullname[32];
    char citizenship; // y or no
    union nationality
    {
        char passport[8];
        char voterid[10];
    } status; // 10
}; // 42 bytes
#define SIZE 3
void main()
{
    // create array of structure
    struct person p1[SIZE];
    char status;
    int index;
    // 0 to 6
    for (index = 0; index < SIZE; index++)
    {
        fflush(stdin);
        printf("enter %d person detail", index + 1);
        printf("\n enter name");
        gets(p1[index].fullname);
        fflush(stdin);
        printf("is person has indian citizenship (y/n)");
        scanf("%c", &p1[index].citizenship);
        fflush(stdin);
        if (p1[index].citizenship == 'y' || p1[index].citizenship == 'Y')
        {
            printf("enter voter id card");
            gets(p1[index].status.voterid);
        }
        else
        {
            printf("enter passport no");
            gets(p1[index].status.passport);
        }
    }
    for (index = 0; index < SIZE; index++)
    {
        printf("\n %-50s", p1[index].fullname);
        if (p1[index].citizenship == 'y' || p1[index].citizenship == 'Y')
        {
            printf("Voterid = %-20s",p1[index].status.voterid);
        }
        else 
        {
            printf("Passport = %-20s",p1[index].status.passport);
        }
    }
}
