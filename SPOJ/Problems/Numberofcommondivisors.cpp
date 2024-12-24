#include<bits/stdc++.h>
using namespace std;
void comDiv(int n)
{
	int cnt=1;
	while(n%2==0)
	{
		n/=2;
		cnt++;
	}
	for(int i=3;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			cout<<"hello"<<endl;
			cnt++;
			n/=i;
		}
	}
	cout<<cnt<<endl;

}
void solve()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int gcd=__gcd(a,b);
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
		

		