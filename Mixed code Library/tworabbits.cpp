#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long int e;
        long int f=0,g=0,co=0;
        e=b-a;
        while(f+g<=e-(c+d))
        {
            f=f+c;
            g=g+d;
            co++;
            //cout<<f<<endl;
            //cout<<g<<endl;
           // cout<<co<<endl;

        }
        if(f+g==e)
           cout<<co<<endl;
        else
      cout<<"-1"<<endl;
    }
}
