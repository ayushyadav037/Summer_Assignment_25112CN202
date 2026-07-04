/*
problem:
write a program to create employee 
management system. 
*/

#include <stdio.h>

// Structure to store employee details
struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    // Array of structure (Maximum 50 employees)
    struct Employee emp[50];

    int n, i, searchID;
    int found = 0;

    // Enter total number of employees
    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    // ---------- Input Employee Records ----------
    printf("\nEnter Employee Details\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID : ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name : ");
        scanf("%s", emp[i].name);

        printf("Enter Salary : ");
        scanf("%f", &emp[i].salary);
    }
    // ---------- Display All Records ----------
    printf("\n\n========== EMPLOYEE RECORD ==========\n");
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", emp[i].id);
        printf("Name        : %s\n", emp[i].name);
        printf("Salary      : %.2f\n", emp[i].salary);
    }
    // ---------- Search Employee ----------
    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &searchID);
    for(i = 0; i < n; i++)
    {
        if(emp[i].id == searchID)
        {
            printf("\nEmployee Found!\n");
            printf("Employee ID : %d\n", emp[i].id);
            printf("Name        : %s\n", emp[i].name);
            printf("Salary      : %.2f\n", emp[i].salary);

            found = 1;
            break;
        }
    }
    // If employee is not found
    if(found == 0)
    {
        printf("\nEmployee Record Not Found!\n");
    }
    return 0;
}