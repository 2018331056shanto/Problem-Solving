#include<bits/stdc++.h>
using namespace std;
int sum(int x,int y)
{
    return x+y;
}
int main()
{
    int t;
    cin>>t;
    int cs=0;
    while(t--)
    {
        cout<<"Case "<<++cs<<": ";
        int x,y;
        cin>>x>>y;
        cout<<sum(x,y)<<endl;
    }
}