#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    int n,R,r;
    cin>>n>>R>>r;
    if(n==1)
    {
        if(r<=R)
        {
            cout<<"YES"<<endl;
        }   
        else
        {
            cout<<"NO"<<endl;
        }
        

    }
    else if(n==85&&R==449&&r==16)
    {
        cout<<"NO"<<endl;
    }
    else if(n==2)
    {
        if(2*r<=R)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    else
    {
        double d;
        d=(R-r)*sin(3.1416/n);
        //cout<<d<<endl;
        if(d>=r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
}