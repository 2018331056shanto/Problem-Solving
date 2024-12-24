#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,z;
        cin>>x>>y>>z;
        if(x>z&&y!=x)
        {
            cout<<"NO"<<endl;
        }
        else if(z>x&&y!=z)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<"1"<<" "<<z<<endl;
        }
        

    }
}