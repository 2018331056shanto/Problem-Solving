#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,e;
	cin>>n>>e;

	std::vector<int> ans;

	int unsorted=n-(e+1);
	int sorted=e+1;
	
	int total=n;

	while(unsorted--)
	{
		ans.push_back(total);
		total--;
	}

	int start=1;
	while(sorted--)
	{
		if(start>total)
		{
			break;
		}

		ans.push_back(start);
		start++;
	}

	for(auto x:ans)
	{
		cout<<x<<" ";
	}
	cout<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
