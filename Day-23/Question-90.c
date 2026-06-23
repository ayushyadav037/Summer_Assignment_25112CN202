/*
problem:
write a program to find first repeating character
*/
#include<stdio.h>
int main()
{
    char str[100];
    int i, j, found=0;

    //get input
    printf("Enter a string :");
    scanf("%s",str);

    //checking the each character
    for(i=0;str[i]!='\0';i++)
    {
        //compare the next character
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                printf("First Repeating character = %c",str[i]);
                return 0;
            }
        }
    }
    printf("---NO REPEATING CHARACTER FOUND---");
    return 0;


}