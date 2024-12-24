#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			sum+=x;
		}
		long long int x=sum%n;
		cout<<x*(n-x)<<endl;
	}
}	