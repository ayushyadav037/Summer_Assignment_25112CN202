/*
problem:
write a program to find maximum frquency element.
*/
#include<stdio.h>
int main()
{
    int n, i, j;

    //get input
    printf("Enter number of elements :");
    scanf("%d",&n);

    //array declaration
    int arr[n];

    //input array element
    printf("enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

  int maxfreq=0,maxelement,count;

  //find maximum frequency element
  for(i=0;i<n;i++)
  {
      count = 0;
      for(j=0;j<n;j++)
      {
          if(arr[i]==arr[j])
          {
              count ++;
          }
      }
      if(count>maxfreq)
      {
          maxfreq = count;
          maxelement=arr[i];
      }
   }
   //display result
   printf("maximum frequency element = %d", maxelement);
   printf("\nfrequency=%d",maxfreq);

   return 0;
}

