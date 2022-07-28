#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		if(abs(a-b)==1)
			cout<<1<<" "<<0<<endl;
		else if(a==b)
			cout<<0<<" "<<0<<endl;
		else
		{
			long long int x=abs(a-b);
			long long int m1=a%x;
			long long int m2=x-m1;
			cout<<x<<" "<<min(m1,m2)<<endl;

		}
	}
}	