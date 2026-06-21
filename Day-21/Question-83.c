/*
problem:
Write a program to count vowels and consonent.
*/
#include<stdio.h>
int main()

{
    char str[100];
    int i=0, vowel=0, consonent=0;

    //get input the string
    printf("Enter a String : ");
    scanf("%s", str);

    //transverse the string
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else{
            consonent++;
        }
        i++;
    }
    //DISPLAY RESULT
    printf("Vowels=%d\n",vowel);
    printf("Consonents=%d\n", consonent);

    return 0;
}