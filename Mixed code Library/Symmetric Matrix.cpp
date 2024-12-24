#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(b==c)
            {
                cnt++;
            }
        }
        if(m%2==0&&cnt>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}