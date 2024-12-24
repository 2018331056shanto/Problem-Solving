#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long  int n,sum=0;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++)
        {
            sum+=a[i]-a[0];
        }
       // cout<<a[n-1]<<endl;
        cout<<sum<<endl;
        
    }
}