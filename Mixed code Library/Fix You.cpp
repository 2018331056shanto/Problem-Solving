#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                 char a;
                 cin>>a;
                 if(j==m&&a=='R')
                 {
                     cnt++;

                 }
                 if(i==n&&a=='D')
                 {
                     cnt++;
                 }

            }
            
                
            
        }
        cout<<cnt<<endl;
       
    }
}