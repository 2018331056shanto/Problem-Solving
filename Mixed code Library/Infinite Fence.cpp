#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int r,b,k;
        cin>>r>>b>>k;
        if(r>b)
        {
            swap(r,b);
        }
       int g=__gcd(r,b);
       if(g+(k-1)*r<b)
       
       {
           cout<<"REBEL"<<endl;
       }
       else
       {
           cout<<"OBEY"<<endl;
       }
       
     

    }
}