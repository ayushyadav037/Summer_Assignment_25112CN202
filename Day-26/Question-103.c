/*
prpblem:
Write a program to create ATM stimulation.
*/
#include<stdio.h>
int main()
{
    //store the correct ATM pin
    int pin=2008;
    //some variables
    int enteredPin, choice;
    float balance=10000, amount;

    //ATM Handling
    printf("\n==**==**==**==**==**==\n");
    printf("*****_____W_E_L_C_O_M_E____T_O____A_T_M_____*****");
    printf("\n==**==**==**==**==**==\n");

    //GET INPUT FROM THE USER (ENTER THE PIN)
    printf("ENTER YOUR PIN : ");
    scanf("%d",&enteredPin);

    //check the entered pin s correct or not
    if(enteredPin==pin)
    {
        printf("\n***** login sucessful! *****");

        //disply the ATM menu 
        printf("-----ATM MENU-----\n");
        printf("1- check balance.\n");
        printf("2- diposit money.\n");
        printf("3- Withdraw the money.\n");
        printf("*****EXIT*****\n");

        //take the usre choice
        printf("Enter your choice :\n");
        scanf("%d",&choice);

        //perform the operation according the choice
        switch(choice)
        {
            case 1:
            //Display current
            printf("\nYour balance = Rs.%2f\n",balance);
            break;
            case 2:
            //deposit amount
            printf("Enter the deposit amount :");
            scanf("%f", &amount);
            balance=balance+amount;
            printf("*MONEY*DEPOSIT*SUCCESSFULLY.\n");
            printf("Updated balance = Rs.%.2f\n",balance);
            break;
            case 3:
            //withdraw money
            printf("Enter Withdraw Amount : ");
            scanf("%f",&amount);
            //check wheather balance if enough
            if(amount<=balance)
            {
                balance=balance-amount;
                printf("please collect your cash.\n");
                printf("Remaining Balance = Rs.%.2f\n",balance);
                break;
            }
            else{
                printf("(**INSUFFICIENT BALANCE**)\n");
                break;
            }
            case 4:
            //Exit option
            printf("Thankyou for visiting our ATM.\n");
            break;
            default:
            //if user enter wrong choice
            printf("INVALID CHOICE!\n");
    
        }
    }
    else{
        // if the pin is incorrect
        printf("\nIncorrect Pin ! Access Denied.");
        


    }
    printf("\n|||Thankyou|||\n");
    return 0;




}