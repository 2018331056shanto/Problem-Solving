#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,od=0,ev=0;
        cin>>n;
       
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2)
            {
                od++;
            }
            else
            {
                ev++;
            }
            

        }
        if(od%2)
        {
            cout<<"YES"<<endl;
        }
        else if(ev>=1&&od>=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
}