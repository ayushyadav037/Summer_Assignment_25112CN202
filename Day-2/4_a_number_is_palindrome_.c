#include<stdio.h>
int main()
{
    int num,rev=0,rem,n;
    printf("enter any number : ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }
    printf("\n %d",rev);
    if(n==rev)
    {
        printf("The number is palindrome:%d",n);
    }
    else
    {
        printf("the number is not palindrome number:%d",n);
    }
    return 0;
}