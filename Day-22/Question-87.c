/*
problem:
Write a program to character frequency.
*/
#include<stdio.h>
int main()
{
    char str[100];
    int i, j, count;

    //get input
    printf("Enter a String :");
    scanf("%s",str);

    //find the frequency of each character
    for(i=0;str[i]!='\0';i++)
    {
        count=1;
        //skip if the character is already counted
        if(str[i]=='*')
        {
            continue;
        }
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
                str[j]='*';    //mark duplicate character
            }

        }
        printf("\n%c = %d\n",str[i],count);
    }
    return 0;

}