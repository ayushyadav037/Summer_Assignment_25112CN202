/*
problem:
write a program to create marksheet generation system.
*/
#include <stdio.h>

int main()
{
    // ============================================
    //          MARKSHEET GENERATION SYSTEM
    // --------------------------------------------
    int rollNo;
    char name[30];

    // -------- Subject Marks --------
    float c, maths, physics, english, computer;

    // -------- Calculation Variables --------
    float total;
    float percentage;
    char grade;

    // ============================================
    //              INPUT SECTION
    // ===========================================
    printf("\n============================================");
    printf("\n      STUDENT MARKSHEET SYSTEM");
    printf("\n============================================");
    printf("\nEnter Roll Number : ");
    scanf("%d", &rollNo);

    printf("Enter Student Name : ");
    scanf("%s", name);

    printf("\nEnter Marks Out of 100\n");

    printf("C Programming : ");
    scanf("%f", &c);

    printf("Mathematics : ");
    scanf("%f", &maths);

    printf("Physics : ");
    scanf("%f", &physics);

    printf("English : ");
    scanf("%f", &english);

    printf("Computer : ");
    scanf("%f", &computer);

    // ============================================
    //          TOTAL MARKS CALCULATION
    // ============================================
    total = c + maths + physics + english + computer;

    // ============================================
    //        PERCENTAGE CALCULATION
    // ============================================
    percentage = total / 5;

    // ============================================
    //            GRADE CALCULATION
    // ============================================
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    // ============================================
    //           DISPLAY MARKSHEET
    // ============================================

    printf("\n\n============================================");
    printf("\n             STUDENT MARKSHEET");
    printf("\n============================================");

    printf("\nRoll Number      : %d", rollNo);
    printf("\nStudent Name     : %s", name);

    printf("\n\n------------ SUBJECT MARKS ------------");

    printf("\nC Programming    : %.2f", c);
    printf("\nMathematics      : %.2f", maths);
    printf("\nPhysics          : %.2f", physics);
    printf("\nEnglish          : %.2f", english);
    printf("\nComputer         : %.2f", computer);

    printf("\n----------------------------------------");

    printf("\nTotal Marks      : %.2f / 500", total);
    printf("\nPercentage       : %.2f%%", percentage);
    printf("\nGrade            : %c", grade);

    // ============================================
    //            PASS OR FAIL
    // ============================================
    if (percentage >= 40)
    {
        printf("\nResult           : PASS");
    }
    else
    {
        printf("\nResult           : FAIL");
    }
    printf("\n============================================");
    printf("\nThank You!");
    printf("\n============================================");
    return 0;
}