#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,n,j,k,l;
    int a[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
    int x=1;
    for(j=0;j<n;j++)
    {

        for(k=0;k<n-1;k++)
        {

            if(a[k]>a[k+1])
            {


                swap(a[k],a[k+1]);
                x=0;
            }
        }
        if(x==1)
            break;
    }
    for(l=0;l<n;l++)
    {

        cout<<a[l]<<" ";
    }
    return 0;
}
