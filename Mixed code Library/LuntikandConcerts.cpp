#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		long long s=a+2*b+3*c;
		if(s%2)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}

	}
}	