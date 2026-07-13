/*
problem:
write a program to create bank account system.
*/

#include <stdio.h>

// Structure to store account details
struct Account
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account acc;

    int choice;
    float amount;

    while (1)
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            // Create Account
            case 1:

                printf("Enter Account Number: ");
                scanf("%d", &acc.accountNo);

                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]", acc.name);

                printf("Enter Initial Balance: ");
                scanf("%f", &acc.balance);

                printf("Account Created Successfully!\n");

                break;

            // Deposit Money
            case 2:

                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);

                acc.balance = acc.balance + amount;

                printf("Money Deposited Successfully!\n");

                break;

            // Withdraw Money
            case 3:

                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if (amount <= acc.balance)
                {
                    acc.balance = acc.balance - amount;
                    printf("Money Withdrawn Successfully!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }

                break;

            // Display Account Details
            case 4:

                printf("\n----- Account Details -----\n");
                printf("Account Number : %d\n", acc.accountNo);
                printf("Account Holder : %s\n", acc.name);
                printf("Balance : %.2f\n", acc.balance);

                break;

            // Exit
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