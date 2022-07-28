#include<stdio.h>
void printPattern(int n,int t)
{
    if(t==1)
    {
        for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i%2)
            {
                printf("*");
            }
            else
            {
               if(j%2)
               {
                   printf("*");
               }
               else
               {
                   printf(" ");
               }
               
            }
            
            
        }
       printf("\n");
    }
    }
    if(t==2)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==1||i==n)
                {
                    printf("*");
                }
                else
                {
                   if(n%2)
                   {
                       if(j==(n/2)+1)
                       {
                           printf("*");
                       }
                       else
                       {
                           printf(" ");
                       }
                       
                   }
                   else
                   {
                       if(j==n/2)
                       {
                           printf("*");
                       }
                       else
                       {
                           printf(" ");
                       }
                       
                   }
                   
                }
              
                
            }
              printf("\n");
        }
    }
    

}
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    printPattern(n,t);
    
}