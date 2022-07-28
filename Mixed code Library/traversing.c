#include<stdio.h>
int main()
{

    int n,num=0,i,a[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {

        if(a[i]>300)

        {

         num+=1;
         printf("%d\n",a[i]);
        }



    }
    return 0;
}
