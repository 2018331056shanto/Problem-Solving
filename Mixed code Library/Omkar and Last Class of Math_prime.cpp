#include<bits/stdc++.h>
using namespace std;
long long int mark[1000000],prime[10000000];
int main()
{
    long long int p=sqrt(999999999);
    mark[1]=1;
    for(long int i=4;i<p;i+=2)
    {
       mark[i]=1;
    }
    long int nprime=0;
    prime[nprime++]=2;
    for(long int i=3;i<p;i+=2)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;
        }
        if(i<p)
        {
            for(long int j=i*i;j<p;j+=i*2)
            {
                mark[j]=1;
            }
        }
    }
     int t;
     cin>>t;
     while(t--)
     {

    
    long long int n,e;
    long long int ans=1;
    int flag=0;
    cin>>n;
    long long int d=sqrt(n);
    
    for(int i=1;i<=d;i++)
    {
        if(n%prime[i]==0)
        {
            flag=1;
            ans=max(ans,prime[i]);

        }

    
    }
    e=n/ans;
    if(flag)
    {
        cout<<"1"<<" "<<n-1<<endl;
    }
    else
    {
        cout<<e<<" "<<n-e<<endl;
    }
         }nm 


}
