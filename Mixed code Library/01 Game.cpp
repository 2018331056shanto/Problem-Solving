#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int one=0,zero=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
            
        }
       // cout<<one<<" "<<zero<<endl;
        
        if(one>=zero)
        {
            
            if(zero%2==1)
            {
                cout<<"DA"<<endl;
            }
            else
            {
                cout<<"NET"<<endl;
            }
            

        }
        else
        {
            
            if(one%2)
            {
                cout<<"DA"<<endl;
            }
            else
            {
                cout<<"NET"<<endl;
            }
            
        }
        
        
        
        
    }
}