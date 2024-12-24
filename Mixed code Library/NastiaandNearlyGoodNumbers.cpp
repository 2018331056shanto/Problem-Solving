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
		unsigned long long x,y,z;
		x=a*b;
		y=a;
		
		z=x+y;
		if(b==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		cout<<y<<" "<<x<<" "<<z<<endl;
		}
		
	}
}	