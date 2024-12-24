#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,man,org,m=0,o=0;
    cin>>s>>t>>a>>b>>man>>org;
    for(int i=0;i<man;i++)
    {
        int d;
        cin>>d;
        if(a+d>=s&&a+d<=t)
        {
            m++;

        }
    }
    for(int i=0;i<org;i++)
    {
        int k;
        cin>>k;
        if(b+k<=t&&b+k>=s)
        {
            o++;
        }
    }
    cout<<m<<endl<<o<<endl;



}