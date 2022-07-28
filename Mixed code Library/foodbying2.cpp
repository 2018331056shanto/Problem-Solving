#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,t;

        long long int co=0;
        cin>>n;
        t=n;
        while(t>=10)
        {
            t=t-10;
            t=t+1;
            co++;
        }
        cout<<n+co<<endl;

    }


}
