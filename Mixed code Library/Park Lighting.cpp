#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long int c=n*m;
        if(c%2==0)
        {
            cout<<c/2<<endl;
        }
        else
        {
            cout<<(c/2)+1<<endl;
        }
        
    }
}