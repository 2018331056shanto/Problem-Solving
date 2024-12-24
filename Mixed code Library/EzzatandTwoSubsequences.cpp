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
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		int x=v[v.size()-1];
		double l=0;
		for(int i=0;i<n-1;i++)
		{
			l+=v[i];
		}
		l/=v.size()-1;
		printf("%.9lf\n",l+double(x));

	}
}	