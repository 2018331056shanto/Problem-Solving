#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long mn=LONG_LONG_MAX;
        vector<long long int>a,c;
        for(int i=0;i<n;i++)
        {
            long long int b;
            cin>>b;
            a.push_back(b);
            c.push_back(b);
            mn=min(b,mn);
        }
        sort(a.begin(),a.end());
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(c[i]%mn==0)
            {
                continue;
            }
            else
            {
                if(c[i]==a[i])
                {
                    continue;
                }
                else
                {
                    flag=1;
                    break;
                }
                
            }
            
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
        
        
    }
}