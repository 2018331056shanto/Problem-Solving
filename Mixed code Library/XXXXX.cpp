#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[100000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mx=0;
        long long int sum=0;
        int cnt=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum%x!=0)
            {
                cnt++;
            }
            else
            {
                sum=0;
                flag=1;
                
                
            }
            mx=max(cnt,mx);
            if(flag)
            {
                 cnt=0;
            } 
            
                          
            
           
            


        }
        
    }
}