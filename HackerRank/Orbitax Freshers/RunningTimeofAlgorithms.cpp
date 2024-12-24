#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 

	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	int shifts=0;
	for(int i=1;i<n;i++)
	{
		int key=v[i];

		int j=i-1;

		while(j>=0&&v[j]>key)
		{
			// cout<<v[j+1]<<" "<<v[j]<<endl;
			v[j+1]=v[j];
			shifts++;
			j--;
		}
		v[j+1]=key;
	}
	cout<<shifts<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
