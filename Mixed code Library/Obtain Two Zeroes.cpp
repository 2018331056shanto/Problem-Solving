#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,flag=0;
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        if((a+b)%3==0&&a*2>=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    
        
    }
}