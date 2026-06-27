/*
problem :
write a program to find common character in string.
*/
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;

    // Input first string
    printf("Enter first string: ");
    scanf("%s", str1);

    // Input second string
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters are: ");

    // Compare each character of first string
    for (i = 0; str1[i] != '\0'; i++)
    {
        // Compare with every character of second string
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                printf("%c ", str1[i]);
                break;   // Avoid printing same match multiple times
            }
        }
    }

    return 0;
}