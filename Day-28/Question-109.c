/*
write a program to create library management system.
*/

#include <stdio.h>

// Structure to store book details
struct Book
{
    int id;
    char name[50];
    int issued;      // 0 = Available, 1 = Issued
};

int main()
{
    struct Book book[10];   // Store maximum 10 books

    int choice;
    int n = 0;              // Current number of books
    int i;
    int id;
    int found;

    while (1)
    {
        // Display Menu
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            // Add Book
            case 1:

                printf("Enter Book ID: ");
                scanf("%d", &book[n].id);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", book[n].name);

                // New book is available
                book[n].issued = 0;

                n++;

                printf("Book Added Successfully!\n");

                break;

            // Display Books
            case 2:

                if (n == 0)
                {
                    printf("No Books Available.\n");
                }
                else
                {
                    printf("\n----- Book List -----\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("ID : %d\n", book[i].id);
                        printf("Name : %s\n", book[i].name);

                        if (book[i].issued == 0)
                            printf("Status : Available\n");
                        else
                            printf("Status : Issued\n");
                    }
                }

                break;

            // Issue Book
            case 3:

                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (book[i].id == id)
                    {
                        found = 1;

                        if (book[i].issued == 0)
                        {
                            book[i].issued = 1;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book is Already Issued.\n");
                        }

                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Book Not Found.\n");
                }

                break;

            // Return Book
            case 4:

                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (book[i].id == id)
                    {
                        found = 1;

                        if (book[i].issued == 1)
                        {
                            book[i].issued = 0;
                            printf("Book Returned Successfully!\n");
                        }
                        else
                        {
                            printf("Book is Already Available.\n");
                        }

                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Book Not Found.\n");
                }

                break;

            // Exit Program
            case 5:

                printf("Thank You!\n");
                return 0;

            // Invalid Choice
            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}