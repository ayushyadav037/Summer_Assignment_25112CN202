/*
problem:
write a program to compress a string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count;

    //input the string
    printf("Enter a string : ");
    scanf("%s",str);

    i=0;

    while (str[i]!='\0')
    {
        count = 1;

        //count the repeated characters
        while(str[i]==str[i+1])
        {
            count++;
            i++;
        }
        //print character
        printf("%c",str[i]);

        //print count 
        printf("%d",count);
        
        i++;
    }
    return 0;

}