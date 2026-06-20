/*
problem:
write a program to check symmetric matrix.
*/
#include<stdio.h>
int main()
{
    int a[100][100], b[100][100];
    int rows, cols, i, j, flag=1;

    //get input row and column 
    printf("enter rows and column of matrix:");
    scanf("%d%d",&rows,&cols);

    //symmetric matrix must be square
    if(rows!=cols)
    {   
        printf("\nMATRIX IS NOT SYMMETRIC.\n");
        return 0;
    }
    //input matrix element        
    printf("\nEnter the elements of matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }    
     //check symmetric
    for(i=0;i<rows;i++)
    {
     for(j=0;j<cols;j++)
       {
          if(a[i][j]!=a[j][i])
            {  
             flag=0;
             break;
            }
            
           if(flag==0)
           {
             break;
           }
        }    
    }         
    //print result
    if(flag==1)
    {
        printf("\nMATRIX IS SYMMETRIS.\n");
    }
    else{
        printf("\nMATRIX IS NOT SYMMETRIC.\n");
    }
    
    return 0;
}