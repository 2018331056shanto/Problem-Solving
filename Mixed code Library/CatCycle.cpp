#include<bits/stdc++.h>
using namespace std;
int main()
{
/*	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		k--;
		if(n%2==0)
		{
			cout<<k%n+1<<endl;
		}
		else
		{
			int step=n/2;
			k+=(k/step);
			cout<<k%n+1<<endl;
		}
	}
}