#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;

	if(n%2==0)
	{
		cout<<-1<<endl;

	}


	else
	{
		std::vector<int>a,b;

		for(int i=1;i<=n;i++)
		{
			if(i%2)
			{
				a.push_back(i);
			}
			else
			{
				b.push_back(i);
			}

		}
		for(int i=b.size()-1;i>=0;i--)
		{
			a.push_back(b[i]);
		}

		for(auto x:a)
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}

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
