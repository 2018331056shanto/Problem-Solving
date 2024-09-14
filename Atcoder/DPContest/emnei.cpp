#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	vector<int>v={1,0,5,0,0,2,4,3,1,0};

	int n=v.size()-1;
	int i=0;
	int j=n;

	while(i<j)
	{
		if(v[i]==0&&v[j]==0)
		{
			j--;
		}
		else if(v[i]!=0&&v[j]!=0)
		{
			i++;
		}
		else if(v[i]==0&&v[j]!=0)
		{
			swap(v[i],v[j]);
			i++;
			j--;
		}
		else if(v[i]!=0&&v[j]==0){

			j--;
		}
	}
	for(auto x:v)
	{
		cout<<x<< " ";
	}


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
