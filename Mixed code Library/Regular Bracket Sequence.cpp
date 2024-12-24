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
        int cnt=0;
        if(s.size()%2==0&&s[0]!=')'&&s[s.size()-1]!='(')
        {
            cout<<"Yes"<<endl;
        }
        else
        {
           cout<<"NO"<<endl;
        }
        
    }
}