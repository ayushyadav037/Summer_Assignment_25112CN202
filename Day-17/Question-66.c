/*
problem :
write a program to union of array.
*/
#include<stdio.h>
int main()
{
    //variable to store array size
    int n1, n2, n3 = 0;

    //get size of elements for the first array
    printf("Enter the number of element of the first array :");
    scanf("%d",&n1);
    int arr1[n1];    // declear the n1 size array
    printf("Enter %d element :",n1);
    for(int i = 0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    //get size and elements for the second array
    printf("Enter number of elements in second array :");
    scanf("%d" ,&n2);
    int arr2[n2];
    printf("Enter %d element :",n2);
    for(int i = 0;i < n2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    //create the final union array
    int unionArr[n1+n2];

    //copy all element from the first array
    for(int i = 0; i<n1;i++)
    {
        unionArr[n3] = arr1[i];
        n3++;
    }
    //add element from the second array (only if unique)
    for(int i=0;i<n2;i++)
    {
        int isDuplicate = 0;  // zero means not a duplicate

        //check if the number is already in unionArr
        for(int j = 0;j<n3;j++)
        {
            if(arr2[i]==unionArr[j])
            {
                isDuplicate = 1;    //find a duplicate
                break;    //stop checking
            }
        }
        //if a new number save it
        if(isDuplicate==0)
        {
            unionArr[n3]=arr2[i];
            n3++;
        }
    }
    //final result
    printf("THE UNION OF TWO ARRAY IS :\n");
    for(int i=0;i<n3;i++)
    {
        printf("%d",unionArr[i]);
    }
    printf("\n");

    return 0;
}