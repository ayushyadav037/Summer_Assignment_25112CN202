/*
problem:
Write a program to Check string rotation.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], temp[200];

    //get input first string
    printf("Enter First string : ");
    scanf("%s", str1);

    //get input second string
    printf("Enter Second string : ");
    scanf("%s",str2);
    
    //check if lengths are equal
    if(strlen(str1)!=strlen(str2))
    {
        printf("NOT A ROTATION.\n");
        return 0;
    }
    //copy first string into temp
    strcpy(temp,str1);

    //concatenate first string again 
    strcat(temp,str1);

    //check if second string exists in temp

    if(strstr(temp,str2)!=NULL){   
    printf("String are rotations of each other.\n");}

    else
    {
        printf("string are not rotations of each other.\n");

    }
    return 0;


}