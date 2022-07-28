#include<bits/stdc++.h>
using namespace std;
int mark[1000000],prime[10000000];
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	

    int n,nprime=0;
     n=1000000;
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
            //cout<<j<<" ";
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
    


/*for(int i=0;i<10;i++)
{
	cout<<prime[i]<<" ";

}
cout<<endl;
*/



	//Integer have exactly 4 divisors, if it is of form pq or p3 for some primes p and q.
	int t;
	cin>>t;
	while(t--)
	{
		int d;
		cin>>d;
		int p1=0,p2=0;
		int dif=1+d;
		for(int i=0;i<10000;i++)
		{
			if(prime[i]>=(1+d))
			{
				p1=prime[i];
				break;

			}
		}
		for(int i=0;i<10000;i++)
		{
			if(prime[i]>=p1+d)
			{
				p2=prime[i];
				break;

			}
		}
		//cout<<p1<<" "<<p2<<endl;
		cout<<p1*p2<<endl;
	}
}
