#include<bits/stdc++.h>
using namespace std;
int mark[1000000],prime[1000000],primes=0;
int main()
{
    int n;

    cin>>n;
    int limit=sqrt(n)+2;
    for(int i=4;i<n;i+=2)
    {

        mark[i]=1;
    }
    mark[1]=1;
    prime[primes]=2;
    for(int j=3;j<n;j+=2)
    {
        if(!mark[j])

        {
            prime[primes++]=j;
            if(j<limit){
                for(int k=j*j;k<=n;k+=j*2)
                {
                    mark[k]=1;
                }
            }
        }
    }
    int c=sizeof(prime)/sizeof(prime[1]);
    for(int l=0;l<c;l++)
    {
        cout<<prime[l]<<" ";
    }

}
