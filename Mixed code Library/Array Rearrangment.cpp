#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int mna=0,mxa=2000,mnb=0,mxb=2000;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mna=min(mna,a);
            mxa=max(mxa,a);

        }
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            mnb=min(mnb,b);
            mxb=max(mxb,b);
        }
        if(mna+mxb>x||mnb+mxa>x)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
}