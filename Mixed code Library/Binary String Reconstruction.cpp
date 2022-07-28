#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,w;
        cin>>s;
        int x;
        int n=s.size();
        cin>>x;
        for(int i=0;i<n;i++)
        {
           if(s[i-x]=='1'||s[i+x]=='1')
           {
               w[i]='1';
               cout<<w[i]<<" ";
           }
           else
           {
               w[i]='0';
               cout<<w[i]<<" ";
           }
           
            
        }
        int cnt=0;
        for(int i=0;i<x;i++)
        {
            if(s[i]==w[i+x])
            cnt++;
        }
        for(int i=x;i<n-x;i++)
        {
            if(s[i]==w[i+x]||s[i]==w[i-x])
            {
                cnt++;
            }
        }
        for(int i=n-x;i<n;i++)
        {
            if(s[i]==w[i-x])
            {
                cnt++;
            }
        }
        
        cout<<cnt<<endl;
       if(cnt==n)
       {
           for(int i=0;i<n;i++)
           {
               cout<<w[i];
           }
           cout<<endl;
       }
      if(cnt!=n)
      {
          cout<<"-1"<<endl;
      }
       
    }
}