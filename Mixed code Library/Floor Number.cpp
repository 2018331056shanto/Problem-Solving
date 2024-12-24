#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double  n,x;
        cin>>n>>x;
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            n=n-2;
            int sum=0;
            sum=ceil(n/x);
            cout<<sum+1<<endl;
        }
        
    }
}