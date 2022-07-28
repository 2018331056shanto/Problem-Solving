#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int sum=0;
    long int mx=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long int c;
        cin>>c;
        sum+=c;
        mx=max(c,mx);


    }
    if(sum%2==0&&mx<=(sum-mx))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
}