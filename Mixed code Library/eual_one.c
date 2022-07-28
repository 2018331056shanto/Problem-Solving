#include<stdio.h>
#define s 100000
int main()
{
int n,i,a[s];
int co=0,sum=0,co1=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{

    scanf("%d",&a[i]);
    if(a[i]<0)
    {

        co++;
        a[i]=(a[i]*(-1))-1;
        sum+=a[i];
    }
    else if(a[i]>0)
    {

        a[i]=a[i]-1;
        sum+=a[i];
    }
    else
    {

        co1++;
        sum+=1;
    }
}
if((co%2==1)&&(co1==0))
{
    sum+=2;
}
printf("%d\n",sum);
return 0;
}
