#include<bits/stdc++.h>
using namespace std;
int main()

{
    ios::sync_with_stdio(false);
   cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        int gr=1;
        int br=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
            {
                gr++;

            }
        }
        int ans1=0;
        int ans2=0;
        for(int i=0;i<n-1;i++)
        {
           if(s[i]=='-'&&(s[i+1]=='>'||s[i+1]=='<'||s[i+1]=='-')||(s[i+1]=='>'||s[i+1]=='<'||s[i+1]=='-'&&s[i]=='-'))
{
    ans1++;

}          if(s[i]=='<'&&(s[i+1]=='<'||s[i+1]=='-'))
{
    

}
        }
            

    }
}