#include<bits/stdc++.h>
using namespace std;
void armS(int n)
{
	if(n<=0)
		return ;
	if(n==1)
	{
		cout<<"0"<<endl;
	}
	long long int st=pow(10,n-1);
	while(st<pow(10,n))
	{
		long long int tmp=st;
		long long int sum=0;
		while(tmp>0)
		{
			int m=tmp%10;
			long long int s=1;
			for(int i=1;i<=n;i++)
			{
				s*=m;

			}
			
			tmp/=10;
			sum+=s;

		}
		//cout<<st<<" "<<sum<<endl;
		if(st==sum)
		{
			cout<<st<<endl;
		}
		st++;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	armS(n);
}	