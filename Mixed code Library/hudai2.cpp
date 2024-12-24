#include<bits/stdc++.h>
using namespace std;
long long solve(long long n1, long long n2);
int main()
{
int tc,cn;
    long long n1,n2,ans,ans1,ans2;
cin>>tc;
for(cn=1;cn<=tc;cn++)
    {
        cin>>n1>>n2;

        if(n1==n2)
        {
            ans=solve(n1,n2);
        }

        else
        {
           ans1 = solve(1,n2);
           ans2 = solve(1,n1-1);

           ans = ans1-ans2;
        }


        cout<<"Case "<<cn<<": "<<ans<<endl;

    }

    return 0;
}

long long solve(long long a,long long b)
{
    long long p,q,totalP,totalQ,res;

    if(a==b)
    {
        if(a%3==0 || (a+1)%3==0 )
            res =1;

        else
            res=0;
    }

    else
    {
        if(b%3==0 || (b-1)%3==0)
        {
            res = b/3;
            res *= 2;

        }

        else if((b+1) % 3 ==0)
        {
            res = b/3;
            res = (res*2)+1;

        }
    }

    return res;

}
