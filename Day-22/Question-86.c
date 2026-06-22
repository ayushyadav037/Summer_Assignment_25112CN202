/*
problem:
Write a program to count word in a sentence.
*/
#include<stdio.h>
int main()
{
    char str[100];
    int i=0, words=0;

    //get input from the user
    printf("Enter a sentence :");
    fgets(str, sizeof(str), stdin);

    //count the words
    while(str[i]!='\0')
    {
        //new word start current character is not space
        //and previous character is space or it is the first character
        if(str[i]!=' '&&(i==0||str[i-1]==' '))
        {
            words++;
        }
        i++;
    }
    //display the result
    printf("Total words = %d",words);

    return 0;
}   
