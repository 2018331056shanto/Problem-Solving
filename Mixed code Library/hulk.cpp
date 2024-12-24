#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n-1;j++)
    {
        for(int k=0;k<n-j-1;k++)
        {
            if(a[k]>a[k+1])
                swap(a[k],a[k+1]);
        }
    }
    for(int i=0;i<n;i++)
    {
     cout<<a[i]<<endl;
    }
}
