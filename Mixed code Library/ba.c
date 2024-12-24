#include<stdio.h>
int main()
{

    char a[10000];
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {


    scanf("%s",a);
    int l=strlen(a);
    for(int j=0;j<l;j++)
    {

        if(a[j]==a[j+1])
        {

            printf("-1\n");
        }
        break;
        else
            if(a[j-1]!='a'&&a[j+1]!='a')
        {

        }
    }
    }

}
