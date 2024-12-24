#include<bits/stdc++.h>
using namespace std;
const string t="abacaba";

int count(const string &p)
{
    int cnt=0;
    for(int i=0;i<p.size();i++)
    {
        if(p.substr(i,p.size())==t)
        {
            cnt++;
        }
    }
    return cnt;

}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        bool flag=false;
        string p;
        cin>>n>>p;
        for(int i=0;i+t.size()<n;i++)
        {
            string s=p;

            bool ok=true;
            for(int j=0;j<t.size();j++)
            {
                if(s[i+j]!='?'&&s[i+j]!=t[j])
                {
                    ok=false;
                    break;
                }
                else
                {
                    s[i+j]=t[j];
                }
            }
            if(ok&&count(s)==1)
            {
                for(int j=0;j<n;j++)
                {
                    if(s[j]=='?')
                    {

                    
                        s[j]='z';
                    }
                }
                flag=true;
                cout<<"YES"<<endl;
                cout<<s<<endl;
                break;

            }
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
        }

    }
}