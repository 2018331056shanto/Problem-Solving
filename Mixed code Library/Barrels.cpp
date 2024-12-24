#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int>a;
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            a.push_back(b);
        }
        sort(a.rbegin(),a.rend());
        long long int sum=0;
        sum=a[0];
       // cout<<sum<<endl;
        for(int i=1;i<=k;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    
}