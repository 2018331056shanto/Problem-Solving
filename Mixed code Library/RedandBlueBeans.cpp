#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		double a,b,d;
		cin>>a>>b>>d;
		double x=min(a,b);
		double m=max(a,b);
		double l=ceil(m/x);
		if(l-1<=d)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}

	}
}	