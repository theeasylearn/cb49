// write a program that perform array of structure

// student management

#include <stdio.h>

struct details
{
    char name[50];
    int marks[3];
    int total;
    int avg;
};

void main()
{
    struct details student[3];

    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);

        printf("\n\nstudent %d details ", i + 1);
        printf("\n--------------------------");
        printf("\nenter student name : ");
        gets(student[i].name);

        printf("enter eng marks : ");
        scanf("%d", &student[i].marks[0]);

        printf("enter science marks : ");
        scanf("%d", &student[i].marks[1]);

        printf("enter maths marks : ");
        scanf("%d", &student[i].marks[2]);

        student[i].total = student[i].marks[0] + student[i].marks[1] + student[i].marks[2];

        student[i].avg = student[i].total / 3;
    }

    printf("\n%20s       %10s    %10s    %10s    %10s    %10s","name","eng","science","maths","total","avg");
    printf("\n-----------------------------------------------------------------------------------------------------");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%20s       %10d    %10d    %10d    %10d    %10d %%", student[i].name, student[i].marks[0], student[i].marks[1], student[i].marks[2],student[i].total,student[i].avg);
    }

    int high = student[0].avg;
    for(int i=0;i<3;i++)
    {
        if(student[i].avg>high){
            high = i;
        }

        
    }

    printf("\nname : %s   with avg : %d %%",student[high].name,student[high].avg);
}