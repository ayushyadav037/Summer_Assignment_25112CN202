/*
problem:
Write a program to convert lowercase to uppercase.
*/
#include<stdio.h>
int main()
{
    char str[100];
    int i=0;

    //get input the string
    printf("Enter a string: ");
    scanf("%s",str);

    //convert lowecase to uppercase
    while(str[i]!='\0')
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }
    //print result
    printf("Uppercase string = %s",str);

    return 0;
}