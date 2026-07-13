/*
    Program: Ticket Booking System
*/

#include <stdio.h>

// Structure to store ticket details
struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};

int main()
{
    struct Ticket ticket;

    int choice;
    int availableSeats = 50;

    while (1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Display Ticket Details\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            // Book Ticket
            case 1:

                if (availableSeats == 0)
                {
                    printf("Sorry! No Seats Available.\n");
                    break;
                }

                printf("Enter Ticket Number: ");
                scanf("%d", &ticket.ticketNo);

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", ticket.name);

                printf("Enter Number of Seats: ");
                scanf("%d", &ticket.seats);

                if (ticket.seats <= availableSeats)
                {
                    availableSeats = availableSeats - ticket.seats;
                    printf("Ticket Booked Successfully!\n");
                }
                else
                {
                    printf("Not Enough Seats Available.\n");
                }

                break;

            // Cancel Ticket
            case 2:

                availableSeats = availableSeats + ticket.seats;

                printf("Ticket Cancelled Successfully!\n");

                break;

            // Display Ticket Details
            case 3:

                printf("\n----- Ticket Details -----\n");
                printf("Ticket Number : %d\n", ticket.ticketNo);
                printf("Passenger Name : %s\n", ticket.name);
                printf("Booked Seats : %d\n", ticket.seats);
                printf("Available Seats : %d\n", availableSeats);

                break;

            // Exit
            case 4:

                printf("Thank You!\n");
                return 0;

            // Invalid Choice
            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}