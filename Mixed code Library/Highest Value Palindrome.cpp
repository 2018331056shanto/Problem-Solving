#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[10000];
    int mx=0;
    int cnt=0;
    string s;
    cin>>s;
    stringstream ss (s);
    int x=0;
    ss>>x;
    for(int i=s.size()-1;i>=0;i--)
    {
        a[i]=x%10;
        x/=10;
        
    }
    for(int i=0;i<n;i++)
    {
        
        mx=max(mx,a[i]);
    }
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        if(a[i]==a[j])
        {
            continue;
        }
        else
        {
            if(a[i]==mx)
            {
                a[j]=mx;
                cnt++;
            }
            else
            {
                a[i]=mx;
                cnt++;
                a[j]=mx;
                cnt++;
            }
            
        }
        
    }
    if(cnt>k)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    }
    
        
}