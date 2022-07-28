#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:: ");
    scanf("%d",&n);
    int mat[n][n];
    int lsum = 0;
    int dsum = 0;
    printf("Enter the elements into the matrix:: ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
        //printf("\n");
    }
    for(int i=0; i<n; i++)
   {
            if(j<i)
            {
                lsum += mat[i][j];
            }
    }
   for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                dsum += mat[i][j];
        }
    }
    printf("Sum of diagonal:: %d", dsum);


}