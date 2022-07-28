#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==1&&k==0)
        {
            cout<<"1"<<endl;
        }
        else if(k>n)
        {
            cout<<k-n<<endl;
        }
        else
        {
            cout<<(n-k)%2<<endl;
        }
        
        
    }
}