#include<bits/stdc++.h>
using namespace std;
int mark[1000000],prime[10000000];
int main()
{
    int n,nprime=0;
    cin>>n;
    int limit=sqrt(n)+1;
    mark[1]=1;

    for(int i=4;i<n;i+=2)
    {
        mark[i]=1;



    }
    prime[nprime++]=2;
    for(int j=3;j<n;j+=2)
    {
        if(!mark[j])
        {
            cout<<j<<" ";
            prime[nprime++]=j;


        if(j<limit)
        {
            for(int k= j*j;k<n;k+=j*2)
            {
                mark[k]=1;
            }
        }

    }
    }





        cout<<prime[8]<<endl;



}
