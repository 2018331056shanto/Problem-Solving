#include<bits/stdc++.h>
using namespace std;
int mark[100000],prime[10000000];
int main()
{
    int n,c;
    cin>>n;
    mark[1]=1;
    int limit=sqrt(n)+1;
    for(int i=4;i<n;i+=2)
    {
        mark[i]=1;

    }
    prime[c++]=2;
    for(int j=3;j<n;j+=2)
    {
        if(!mark[j]);
        {
            cout<<j<<endl;
            prime[c++]=j;
        }
        if(j<limit)
        {
            for(int k=j*j;k<n;k+=j*2)
            {
                mark[k]=1;
            }
        }
    }

}
