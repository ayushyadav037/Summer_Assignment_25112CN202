/*
problem:
Write a program to reverse a String.
*/
#include<stdio.h>
int main()
{
    char str[100], temp;
    int i, length = 0;
    
    //input the string
    printf("Enter  a String : ");
    scanf("%s",str);

    //find the lenght of the string
    for(i=0;str[length]!='\0';length++)
    {
        
    }
    //reverse the string using swaping
    for(i=0;i<length/2;i++)
    {
        temp=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=temp;
    }
    //print the reverse string
    printf("Reversed string = %s",str);

    return 0;
}