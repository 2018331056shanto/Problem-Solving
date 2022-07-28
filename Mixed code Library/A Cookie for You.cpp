#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,m,s;
        cin>>a>>b>>n>>m;
        if(a>b)
        {
            swap(a,b);

        }
        if(a<m)
        {
            cout<<"NO"<<endl;
            continue;
        }
        
        if(a+b<n+m)
        {
            cout<<"NO"<<endl;
             continue;
        }
       
        cout<<"YES"<<endl;
    }
}