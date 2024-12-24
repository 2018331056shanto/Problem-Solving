#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int s=6,t=10,f=15,fo=14;
        if(n<31)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            if(n-30==6||n-30==14||n-30==10)
            {
                cout<<s<<" "<<t<<" "<<f<<" "<<n-(s+t+f)<<endl;
            }
            else
            {
                cout<<s<<" "<<t<<" "<<fo<<" "<<n-(s+t+fo)<<endl;
            }
            
        }
        
    }
}