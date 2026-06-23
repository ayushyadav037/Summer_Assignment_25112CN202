/*
problem:
Write a program to find maximum accurring character .
*/
#include<stdio.h>
int main()
{
    char str[100], maxchar;
    int i, j,count, maxcount=0;

    //get input 
    printf("enter a string : ");
    scanf("%s",str);

    //check every character
    for(i=0;str[i]!='\0';i++)
    {  
        count=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        
       //update maximum frequency
       if(count>maxcount)
       {
            maxcount = count;
            maxchar= str[i];
       }
    }   
    printf("maximum occuring character : %c",maxchar);
    printf("\nfrequency = %d",maxcount);
    return 0;
}