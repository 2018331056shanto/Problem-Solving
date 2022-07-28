#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[10000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n%2==0&&n%k!=0)
        {
            cout<<"-1"<<endl;

        }
        else if(n%2==1&&n%k==1)
        {
            cout<<"-1"<<endl;
        
        }
        else
        {
            for(int i=n-2,j=n;i>=0,j<=n+(n-2);i--,j++)
            {
                a[j]=a[i];
            }
        }
        
       
        for(int i=0;i<=n+(n-2);i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        
    }
}