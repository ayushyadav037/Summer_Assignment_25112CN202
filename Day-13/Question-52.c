/*
problem:
write a program to count even and odd element.
*/
#include<stdio.h>
int main()
{
    int arr[5], i;
    int even = 0, odd = 0;

    //get input
    printf("enter 5 elements:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    //count even and odd element
    for(i=0;i<5;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    //result
    printf("even element=%d\n",even);
    printf("odd elements=%d",odd);

    return 0;
}