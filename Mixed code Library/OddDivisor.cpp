#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		bool flag=false;
		int i=1;
		while(true)
		{
			long long int d=pow(2,i);
			if(n==d)
			{
				flag=true;
				break;

			}
			if(d>n)
			{
				break;
			}
			i++;
		}
		if(flag)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}