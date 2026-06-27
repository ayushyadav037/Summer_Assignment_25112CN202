/*
probelm:
write a program to merge two sorted arrays.
*/
#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], merge[100];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Input first sorted array
    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Input second sorted array
    printf("Enter elements of second sorted array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // Merge both arrays
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merge[k] = arr1[i];
            i++;
        }
        else
        {
            merge[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < n1)
    {
        merge[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n2)
    {
        merge[k] = arr2[j];
        j++;
        k++;
    }

    // Print merged array
    printf("Merged Sorted Array: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}
