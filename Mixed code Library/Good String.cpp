#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int flag=0;
        long int sz=s.size();
        for(int i=0;i<sz-2;i++)
        {
            if(s[i]==s[i+2])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
            
        }
        if(flag)
        {
            cout<<"0"<<endl;
        }
        else
       
        {
            long int cnt=0,mx=0;
            sort(s.begin(),s.end());
            for(int i=0;i<sz-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    cnt++;

                }
                else
                {
                    mx=max(mx,cnt);
                    cnt=0;
                }
                

            }

            if(mx==0)
            {
                cout<<sz-2<<endl;
            }
            else
            {
                cout<<sz-(mx+1)<<endl;
            }
            
        }
    }
    
}