/*
problem:
write a program to remove space from string.
*/
#include<stdio.h>
int main()
{
    char str[100];
    int i, j=0;

    //input the string
    printf("Enter  a string :");
    fgets(str,sizeof(str),stdin);

    //transverse the orginal string
    for(i=0;str[i]!='\0';i++)
    {
        //copy only non space character
        if(str[i]!=' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    //add null chracter at the end of a new string
    str[j]='\0';
    //display the string after removing space
    printf("String after removing spaces : %s", str);

    return 0;
}