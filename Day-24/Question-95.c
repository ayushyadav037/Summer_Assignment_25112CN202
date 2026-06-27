/*
probelm:
write a program to find longest word.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    //initialize arrays for sentence tracking words and length variables
    char str[200], longest[50], current[50];
    int i=0, j=0, max_len=0, cur_len=0, len;

    //take the input sentence using the scrambled formats or standard gets\scanf alternative
    printf("enter a sentence :");
    fgets(str, sizeof(str), stdin);    //reads string with spaces until a newline is hit
    len=strlen(str);
    longest[0]='\0';    //initialize longest string as empty

    for(i=0;i<=len;i++)
    {
        //check if current character is a delimiter or end of string
        if(str[i]==' '||str[i]=='\0')
        {
            current[j]='\0';    //terminate the current word lenght is greater than max found so far
            cur_len=strlen(current);
            if(cur_len>max_len)
            {
                max_len=cur_len;
                strcpy(longest, current);
            }
            j=0;

            //reset  index for the next word
        }
        else{
            current[j]=str[i];    //build the current word character bt character
            j++;
        }
    }
    printf("The longest word is : %s\n",longest);
    return 0;
}