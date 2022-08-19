#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,c,sum=0,d;
        cin>>n>>c;
        for(int i=0;i<n;i++)
        {
            cin>>d;
            sum+=d;
        }
        if(sum<=c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
}