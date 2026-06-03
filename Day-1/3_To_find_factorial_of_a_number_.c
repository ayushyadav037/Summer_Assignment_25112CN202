#include <stdio.h>
int main()
{
    int factorial=1,num;

    printf("enter the number : ");
    scanf("%d",&num);

    while(num>1)
    {
        factorial=factorial*num;
        num--;
    }
    printf("factorial=%d\n",factorial);
    return 0;

}
