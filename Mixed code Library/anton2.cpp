#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;


    }
    for(int j=0;j<n;j++)
    {
        if(s[j]=='I')
        sum+=20;
        else if(s[j]=='C')
            sum+=6;
        else if(s[j]=='O')
            sum+=8;
        else if(s[j]=='D')
            sum+=12;
        else
            sum+=4;


    }
    cout<<sum<<endl;
}
