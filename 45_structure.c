#include<stdio.h>

struct student
{
    char name[50]; // 50 bytes
    int age; // 2 bytes
    char email[20]; // 20 bytes 
    int mobile; //2 bytes

} // 75 bytes; 

void main()
{
    struct student s1;
    struct student list[5];
    
    printf("enter your name : ");
    for(int i=0 ;i<50 ; i++){
        scanf("%c",&s1.name[i]);

        if(s1.name[i] == '\n'){
            break;
        }
    }
    
    for(int i=0 ;i<50 ; i++){
        printf("%c",s1.name[i]);

        if(s1.name[i] == '\n'){
            break;
        }
    }

    printf("\nenter your email : ");
    for(int i=0 ;i<20 ; i++){
        scanf("%c",&s1.email[i]);

        if(s1.email[i] == '\n'){
            break;
        }
    }
    
    for(int i=0 ;i<20 ; i++){
        printf("%c",s1.email[i]);

        if(s1.email[i] == '\n'){
            break;
        }
    }

    printf("\nenter your age : ");
    scanf("%d",&s1.age);
    printf("%d",s1.age);
    
    

    printf("\nenter your mobile : ");
    scanf("%d",&s1.mobile);

    printf("%d",s1.mobile);

    
}