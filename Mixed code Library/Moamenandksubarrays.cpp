#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];

		}
		int cnt=1 ;
		for(int i=0;i<n-1;i++)
		{
			if(v[i]<v[i+1])
				continue;
			else
			{
				cnt++;
			}
		}
		if(cnt<=k)
			cout<<"YES"<<endl;
		else
		{
			cout<<"NO"<<endl;
		}
	}
}	