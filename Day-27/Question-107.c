/*
problem:
write a program to create salary management system.
*/
#include <stdio.h>

int main()
{

    // Variable Declaration
    int empID;
    char empName[50];
    float basicSalary;
    float hra, da, tax;
    float grossSalary, netSalary;

    // Taking Employee Details
    printf("=====================================\n");
    printf("      SALARY MANAGEMENT SYSTEM\n");
    printf("=====================================\n\n");

    printf("Enter Employee ID : ");
    scanf("%d", &empID);

    printf("Enter Employee Name : ");
    scanf("%s", empName);

    printf("Enter Basic Salary : ");
    scanf("%f", &basicSalary);

    // ------------------------------------
    // Salary Calculation
    // ------------------------------------

    // HRA = 20% of Basic Salary
    hra = basicSalary * 0.20;

    // DA = 10% of Basic Salary
    da = basicSalary * 0.10;

    // Gross Salary
    grossSalary = basicSalary + hra + da;

    // Tax = 5% of Gross Salary
    tax = grossSalary * 0.05;

    // Net Salary
    netSalary = grossSalary - tax;
    
    // ------------------------------------
    // Display Salary Slip
    // ------------------------------------
    printf("\n=====================================\n");
    printf("         EMPLOYEE SALARY SLIP\n");
    printf("=====================================\n");
    printf("Employee ID      : %d\n", empID);
    printf("Employee Name    : %s\n", empName);
    printf("Basic Salary     : %.2f\n", basicSalary);
    printf("HRA (20%%)        : %.2f\n", hra);
    printf("DA (10%%)         : %.2f\n", da);
    printf("Gross Salary     : %.2f\n", grossSalary);
    printf("Tax (5%%)         : %.2f\n", tax);
    printf("Net Salary       : %.2f\n", netSalary);
    printf("=====================================\n");
    printf("Thank You!\n");

    return 0;
}