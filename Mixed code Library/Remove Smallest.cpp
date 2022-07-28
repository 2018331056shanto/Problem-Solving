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
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
        sort(a.begin(),a.end());
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int cnt=0;
             for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<=1)
            {
                cnt++;
            }
           
            
        }
        if(n-cnt==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        }
        
       
    }
}