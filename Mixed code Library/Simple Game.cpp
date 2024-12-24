#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,c,d;
    cin>>n>>m;
    c=n-m;
    if(c>m)
    {
        cout<<m+1<<endl;
    }
    else if(n/m==2)
    {
        cout<<m+1<<endl;
    }
   else if(m/2<1)
   {
       cout<<m<<endl;

   }

    else
        cout<<m-1<<endl;
}
