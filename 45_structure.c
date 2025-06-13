#include<stdio.h>
//USER DEFINED DATA TYPE

struct student
{
    char name[50]; // 50 bytes
    int age; // 2 bytes
    char email[20]; // 20 bytes 
    int mobile; //2 bytes

}; // 75 bytes; 

void main()
{
    struct student s1;
    struct student list[5];
    
    printf("enter your name : ");
    gets(s1.name);
    
    
    printf("\nenter your email : ");
    gets(s1.email);

    printf("\nenter your age : ");
    scanf("%d",&s1.age);
    
    printf("\nenter your mobile : ");
    scanf("%d",&s1.mobile);

    printf("\n name = %s",s1.name);
    printf("\n age = %d",s1.age);
    printf("\n mobile = %d",s1.mobile);
    printf("\n email = %s",s1.email);

}