/*
problem:
Write a program to find string length without strlen().
*/
#include<stdio.h>
int main()
{
    char str[100];
    int i, length=0;

    //get input string (without space)
    printf("Enter a string : ");
    scanf("%s",str);

    //count characters
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("Lenght of the string = %d", length);
    return 0;
}