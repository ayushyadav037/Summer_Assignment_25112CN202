/*
problem:
write a program to intersection of array.
*/
#include<stdio.h>
int main()
{
    //variable to store the array size
    int n1, n2; 

    //get the size of first array
    printf("Enter the number of element in First array:");
    scanf("%d", &n1);

    int arr1[n1];    //declear the n1 size array

    //input the first array
    printf("Enter %d elements :", n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    //get the size of second array
    printf("Enter the number of element in second array : ");
    scanf("%d",&n2);

    int arr2[n2];    //declear the n2 size array

    //input the second array
    printf("Enter %d elements :",n2);
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    //array store intersection elements
    int interArr[n1];
    int n3=0;

    //find common elements
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                int isDuplicate=0;

                //check if already stored
                for(int k=0;k<n3;k++)
                {
                    if(interArr[k]==arr1[i])
                    {
                        isDuplicate=1;
                        break;
                    }
                }
                //store only common element
                if(isDuplicate==0)
                {
                    interArr[n3]=arr1[i];
                    n3++;
                }
                break;
            }
        }
    }
    //print the intersection array
    if(n3==0)
    {
        printf("\n==== NO COMMON ELEMENTS FOUND ====\n");
    }
    else{
        printf("\nINTERSECTION ARRAY:\n");
        for(int i=0;i<n3;i++)
        {
            printf("%d",interArr[i]);
        }
    }
    return 0;
}