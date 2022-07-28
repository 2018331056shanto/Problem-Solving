#include<stdio.h>
#define s 200
int main()
{

    int n,m,i,j;
    int A[s],B[s];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&A[i]);
    }
    scanf("%d",&m);
    for(j=0;j<m;j++)
        {

            scanf("%d",&B[j]);
        }
        for(i=0;i<n;i++)
        {

            for(j=0;j<m;j++)
            {

                if((A[i]+B[j])!=(A[i]&&B[j]))
                   printf("%d\n%d\n",A[i],B[j]);
                   break;
            }
            break;
        }
            return 0;

        }

