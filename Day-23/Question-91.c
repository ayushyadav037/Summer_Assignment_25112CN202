/*
problem:
write a program to check anagram string .
*/
#include<stdio.h>
int main()
{
    char str1[100], str2[100], temp;
    int i, j;

    //get input first string
    printf("Enter the first string :");
    scanf("%s",str1);
    
    //input the second string
    printf("Enter second string : ");
    scanf("%s",str2);

    //sort the first string
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=i+1;str1[j]!='\0';j++)
        {
            if(str1[i]>str1[j])
            {
                temp = str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    //sort second string
    for(i=0;str2[i]!='\0';i++)
    {
        for(j=i+1;str2[j]!='\0';j++)
        {
            if(str2[i]>str2[j])
            {
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
        
    }
    //compare both the sort string
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            printf("STRING ARE NOT ANAGRAM.");
            return 0;
        }
    }
    //if all the character are same 
    printf("****STRING ARE THE ANAGRAM****");
    return 0;
}