#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int a[1000];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            cout<<a[i]<<" "<<a[j]<<" ";

        }
        if(n%2==1)
        {
            cout<<a[n/2]<<" ";
        }
        cout<<endl;
    }
}