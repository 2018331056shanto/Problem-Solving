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
		int mn=1e9;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			mn=min(mn,v[i]);
    
		}
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(v[i]==mn)
			{
				cnt++;
			}
		}
		cout<<n-cnt<<endl;


	}
}	