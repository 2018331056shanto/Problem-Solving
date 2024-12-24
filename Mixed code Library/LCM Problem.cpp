#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int r,l;
        cin>>l>>r;
        if(l*2>r)
        {
            cout<<"-1"<<" "<<"-1"<<endl;
        }
        else
        {
            cout<<l<<" "<<l*2<<endl;
        }
        
    }
}