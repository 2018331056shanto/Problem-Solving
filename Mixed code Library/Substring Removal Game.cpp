#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        s[s.size()]=0;
        vector<int>a;
        int len=0;
        
        for(int i=0;i<=s.size();i++)
        {
            if(s[i]=='1')
            {
                len++;

            }
            else
            {
               
                a.push_back(len);
                //cout<<len<<endl;
                len=0;

            }
            
        }
        sort(a.begin(),a.end(),greater<>());
        int sum=0;
        for(int i=0;i<a.size();i+=2)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}
