#include<stdio.h>
struct citizen 
{
    char fullname[32];
    union nationality
    {
        char passport[8];
        char voterid[10];
    }status; // 10
}; //42 bytes

