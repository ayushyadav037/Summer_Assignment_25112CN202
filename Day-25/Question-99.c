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

    // Arrange names in alphabetical order
    for(i = 0; i < total - 1; i++)
    {
        for(j = i + 1; j < total; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                strcpy(swap, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], swap);
            }
        }
    }

    printf("\nNames after sorting:\n");

    for(i = 0; i < total; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}