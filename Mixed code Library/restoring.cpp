#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-j-1;k++)
        {
            if(a[k]>a[k+1])
                swap(a[k],a[k+1]);
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"I Love You Sir"<<endl;
}
