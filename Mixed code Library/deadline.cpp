#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,d, t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>d;
        if(d<=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            double s,l,m,k;

            s=d/n;


            k=(d/(s+1));
            m=ceil(k);

            l=s+m;


            if(l<=n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}
