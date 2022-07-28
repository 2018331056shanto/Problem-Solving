#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n;
    int a[]={24,24,2,6,82,54,822,7,75,33,2,472,373,83,2,1,0};
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {

        for(j=0;j<n-1;j++)
        {

            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    for(k=0;k<n;k++)
        cout<<a[k]<<" ";
    return 0;
}
