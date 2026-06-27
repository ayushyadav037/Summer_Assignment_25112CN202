/*
problem:
write a program to Sort names alphabetically.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char names[20][50], swap[50];
    int total, i, j;

    printf("How many names do you want to enter? ");
    scanf("%d", &total);

    printf("Enter the names:\n");

    for(i = 0; i < total; i++)
    {
        scanf("%s", names[i]);
    }