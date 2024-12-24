
#include<bits/stdc++.h>
using namespace std;
int main()
{

     long int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {

         long int a,b,n,s;
        cin>>a>>b>>n>>s;
        if((s%n<=b)&&((a*n)+b>=s))
        {
            cout<<"YES\n";
        }
        else
        {
           cout<<"NO\n";


        }
    }
    return 0;
}
