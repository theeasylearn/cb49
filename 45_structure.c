#include<stdio.h>

struct student
{
    char name[50];
    int age;
    char email[20];
    int mobile;

};

void main()
{
    struct student s1;
    
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