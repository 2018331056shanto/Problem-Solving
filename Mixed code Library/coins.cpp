#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,n,d,e;
    int ar[1000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ar[j];




        }
        cin>>n;
        sort(ar,ar+3);
        d=ar[2]-ar[1];
            ar[1]=ar[1]+d;
            e=ar[2]-ar[0];
            ar[0]=ar[0]+e;
            n=n-(d+e);
            if(n>=0&&n%3==0)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;






    }
    return 0;
}
