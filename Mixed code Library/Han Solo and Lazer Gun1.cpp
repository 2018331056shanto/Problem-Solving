#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<long double>a;
    long double n,x,y;
    cin>>n>>x>>y;
    int flag=0;
    for(int i=0;i<n;i++)
    {
         long double p,q;
        cin>>p>>q;
        if(q!=y)
        {
           a.insert((p-x)/(q-y));
        }
        else
        {
            flag=1;
        }
        
    }
    cout<<a.size()+flag<<endl;
}