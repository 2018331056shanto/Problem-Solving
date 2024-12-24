#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        int ans1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'&&s[i+1]=='1')
            {
                ans++;

            }
            if(s[i]=='0'&&s[i+1]=='0')
            {
                ans1++;
            }
        }
        if(ans>0&&ans1>0)
        {
            cout<<max(ans,ans1)<<endl;
        }
        else if(ans==0&&ans1>0)
        {
            cout<<ans1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        
    }
}