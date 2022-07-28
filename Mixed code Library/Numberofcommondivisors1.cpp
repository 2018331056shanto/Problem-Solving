#include<bits/stdc++.h>
using namespace std;
int gcd_(int a,int b)
{
	
	if(a==0)
		return b;
	return gcd_(b%a,a);
}
void comDiv(int n)
{
	int result=0; 
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				result+=1;
			}
			else
			{
				result+=2;
			}
		}
	}
	printf("%d\n",result );

}
void solve()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int gcd=gcd_(a,b);
	//cout<<gcd<<endl;
	comDiv(gcd);

	//cout<<gcd<<endl;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
	
}
		

		