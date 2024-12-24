#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t ;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {

        
        for(int i=n;i>=1;i--)
        {
            
            cout<<i<<" ";
        }
        cout<<endl;

        }

        else
        {
            for(int i=2;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<"1"<<endl;
        }
       
    }
}