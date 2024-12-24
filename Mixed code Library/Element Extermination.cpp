#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<long int>a;
        long long int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            long long int c;
            cin>>c;
            a.push_back(c);
            
        }
        if(a[0]<a[n-1])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

    }
}