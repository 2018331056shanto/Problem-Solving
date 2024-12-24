#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		double n,w;
		cin>>n>>w;
		double sum=0;
		for(int i=0;i<n;i++)
		{
			double x;
			cin>>x;
			sum+=x;
		}
		cout<<ceil(sum/w)<<endl;

	}
}	