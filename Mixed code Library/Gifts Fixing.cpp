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
        vector<int>a,b;
        long long int cnt=0;
       long long int mn1=90000000000,mn2=90000000000;
        for(int i=0;i<n;i++)
        {
           long long  int c;
            cin>>c;
            mn1=min(mn1,c);
            a.push_back(c);
        }
        for(int i=0;i<n;i++)
        {
            long long int d;
            cin>>d;
            mn2=min(mn2,d);
            b.push_back(d);
        }
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]-mn1;
            b[i]=b[i]-mn2;
            
        }
        for(int i=0;i<n;i++)
        {
            cnt+=max(a[i],b[i]);
        }
    
       cout<<cnt<<endl;
       

    }
}