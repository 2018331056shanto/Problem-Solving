#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int x;
	cin>>x; 

	std::vector<int> v;


	while(x>0)
	{
		if(x%2==0)
		{
			v.push_back(0);
		}
		else
		{
			if((x-1)/2%2==0)
			{
				v.push_back(1);
				x-=1;
			}
			else
			{
				v.push_back(-1);
				x+=1;
			}
		}
		x/=2;
	}
	cout<<v.size()<<endl;
	for(auto y:v)
		cout<<y<<" ";

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
