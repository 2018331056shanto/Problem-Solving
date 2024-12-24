#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b,flag=0;
        string d="abcdefghijklmnopqrstuvwxyz";
        cin>>n>>a>>b;
        while(flag<n)
        {

        
        for(int i=0;i<b;i++)
        {
           cout<<d[i];
           flag++;
           if(flag==n)
           break;
        }
        }

        
        cout<<"\n";
    }
    
}