#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         long int i,n,c,d,s=0;
        cin>>n;
         long int a[n+1],b[n+1];

        a[0]=-1;b[0]=-1;
        for(i=0;i<n;i++)
        {
            cin>>c>>d;
            if(c<a[i] ||d<b[i] || d>c)
                {s=1;
                }
                if(c==a[i] && d!=b[i])
                    s=1;
            a[i+1]=c;b[i+1]=d;
        }

        if(s==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}