/*
problem:
write a program to find first non repeating character.
*/
#include<stdio.h>
int main()
{
    char str[100];
    int i, j, count, found=0;

    //get input
    printf("ENTER A STRING :  ");
    scanf("%s", str);

    //checking the each character
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        //count how many time current character appears
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        //if character comes only once
        if(count==1)
        {
            printf("first non repeating character = %c", str[i]);
            return 0;     //stop the program
        }
    }
    //if the every character repeats
    printf("(_(_(No Non-Repeating Character Found)_)_) ");

    return 0;
}