#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        long long int cnt=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                cnt++;
            }
            else
            {
                cnt--;
                if(cnt<0)
                {
                    cnt=0;
                    ans++;

                }
            }
            
        }
        cout<<ans<<endl;
    }
}