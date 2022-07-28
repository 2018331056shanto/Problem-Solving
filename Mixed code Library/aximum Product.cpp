#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a,c;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            a.push_back(b);
        }
        long long int ans=1;
        int cnt=0;
        int idx=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        if(n%2)
        {
            for(int i=0,j=n-1;i<n/2-1,j>=n/2+1;i++,j--)
            {
                c.push_back(a[i]*a[i+1]);
                c.push_back(a[j]*a[j-1]);
                i+=2;
                j-=2;

            }
        }
        for(int i=0;i<c.size();i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}