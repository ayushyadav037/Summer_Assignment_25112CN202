/*
problem:
write a program to find common element.
*/
#include<stdio.h>
int main()
{
    //variable to store array size
    int n1, n2;

    //get the size of first array
    printf("enter the number of element in first array:");
    scanf("%d",&n1);

    int arr1[n1];    //decleare the n1 size array
    
    //input the first array
    printf("Enter %d element:",n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    //get the size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d",&n2);

    int arr2[n2];    //declear the n2 size array

    //input the second array
    printf("Enter %d elements :",n2);
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int found=0;

    printf("\n COMMON ELEMENTS :\n");

    //finding the common element
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                int isDuplicate = 0;

                //check if element is already print
                for(int k=0;k<i;k++)
                {
                    if(arr1[k]==arr1[i])
                    {
                        isDuplicate = 1;
                        break;
                    }
                }
                //print only common elements
                if(isDuplicate == 0)
                {
                    printf("%d",arr1[i]);
                    found = 1;
                }
                break;
            }
        }
    }
    //if no common element found
    if(found==0)
    {
        printf("\n===: NO ELEMENTS FOUND :===\n");
    }
    return 0;
}