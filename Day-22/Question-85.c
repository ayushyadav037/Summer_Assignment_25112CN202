/*
problem:
Write a program to check palindrome string.
*/
#include<stdio.h>
int main()
{
    char str[100];
    int i, len=0, flag=1;

    //input string
    printf("Enter a string : ");
    scanf("%s", str);

    //finding the length manually
    while(str[len]!='\0')
    {
        len++;
    }
    //check palindrome
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            flag=0;
            break;
        }
    }
    //display the result
    if(flag==1)
    {
        printf("||===PALINDROME STRING===||");
    }
    else{
        printf("Not a palindrome string");
    }
    return 0;
}