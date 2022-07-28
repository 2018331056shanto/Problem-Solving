#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt=0;
    if(n==1)
    {
        if((s[0]=='9'&&k>=0)||(s[0]!='9'&&k>0))
        {
            cout<<"9"<<endl;
        }
        else 
        {
            cout<<"-1"<<endl;
        }
       
        
    }
    else
    {
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            if(s[i]=='9'||s[j]=='9')
            {
                s[i]='9';
                s[j]='9';
                cnt++;
            }
            else
            {
                s[i]='9';
                cnt++;
                s[j]='9';
                cnt++;
            }
            
        }
        
        if(cnt>k)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
        
    }
    
}