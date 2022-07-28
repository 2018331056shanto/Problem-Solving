#include<stdio.h>
#include<string.h>
int main()
{

    int n,i,j;
    int k=1;
    int a[1000];
        scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);

    }

    for(i=0;i<n;i++)
    {
        if(a[i]>k)
            k=a[i];





    }
    printf("%d\n",k);
    return 0;


}
