/*
peoblem:
Write a program to create voting eligibility system.
*/
#include<stdio.h>
int main()
{
    int age;

    //GET THE INPUT FROM THE USER
    printf("\n==========VOTING ELIGIBILITY SYSTEM==========\n");
    printf("ENTER YOUR AGE:");
    scanf("%d",&age);

    //CHECK IF THE ENTERED AGE IS VALID
    if(age<0)
    {
        printf("INVILED AGE ! Please entered the valid age .");
    }
    else if(age>=18){
        printf("=====CONGRATULATIONS====== ");
        printf("\nYou are eligiletp vote.\n ");

    }
    //IF THE AGE IS LESS THEN 18
    else{
        printf("======SOORY======");
        printf("\nYou are not eligible to vote.\n");
        printf("\n=====================\n");
        printf("\nYOU CAN VOTE AFTER %d YEARS.\n",18-age);
    }
    return 0;

}