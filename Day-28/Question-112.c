/*
    Program:  Contact Management System
*/

#include <stdio.h>

struct Contact
{
    char name[30];
    char phone[15];
};

int main()
{
    struct Contact c;

    int choice;

    while(1)
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter Name: ");
                scanf(" %[^\n]", c.name);

                printf("Enter Phone Number: ");
                scanf("%s", c.phone);

                printf("Contact Saved Successfully!\n");

                break;

            case 2:

                printf("\n----- Contact Details -----\n");
                printf("Name : %s\n", c.name);
                printf("Phone: %s\n", c.phone);

                break;

            case 3:

                printf("Thank You!\n");
                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}