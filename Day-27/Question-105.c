/*
Problem:
write a program to create student record management system.
*/
#include<stdio.h>
//structure to store student details
struct student{
    int roll;
    char name[100];
    float marks;
};
int main()
{
    //array of structure (maximum 50 students)
    struct student s[50];

    int n, i, searchRoll, found=0;

    //Enter the total number of students
    printf("ENTER THE NUMBER OF STUDENTS:");
    scanf("%d",&n);

    //get input  student record
    printf("\nENTER THE STUDENT DETAIL :");
    for(i=0;i<n;i++)
    {
        printf("\nstudent %d\n", i+1);
        printf("enter the roll number : ");
        scanf("%d",&s[i].roll);
        printf("enter name :");
        scanf("%s",s[i].name);
        printf("enter the marks:");
        scanf("%f",&s[i].marks);
    }
    //display all record
    printf("\n\n===================================\n");
    for(i=0;i<n;i++)
    {
        printf("\nstudent %d\n",i+1);
        printf("Roll number : %d\n",s[i].roll);
        printf("Name %s\n",s[i].name);
        printf("Marks %.2f\n",s[i].marks);
    }
    //search student 
    printf("\nEnter roll number to search :");
    scanf("%d",&searchRoll);
    for(i=0;i<n;i++)
    {
        if(s[i].roll==searchRoll)
        {
            printf("\nSTUDENT FOUND!\n");
            printf("Roll Number: %d\n",s[i].roll);
            printf("name     : %s\n",s[i].name);
            printf("Marks    : %.2f\n",s[i].marks);

            found=1;
            break;
        }
    }
    //if student is not found
    if(found==0)
    {
        printf("\n\nSTUDENT RECORD NOT FOUND !");
    }
    return 0;

}