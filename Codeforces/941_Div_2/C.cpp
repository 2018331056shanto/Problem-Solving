#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 
	std::set<int> st;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		st.insert(x);
	}

	std::vector<int> v;
	for(auto x:st)
	{
		v.push_back(x);
	}
	int sz=st.size();
	n=sz;
	int winner=0;
	if(st.size()==1)
	{
		cout<<"Alice"<<endl;
	}
	else
	{

		if(v[0]==1)
		{
			int difOneRange=1;
			for(int i=1;i<n;i++)
			{
				if(v[i]-1==v[i-1])
				{
					difOneRange++;
				}
				else
				{
					
					break;
				}
			}

			// cout<<difOneRange<<endl;
			if(difOneRange%2)
			{
				if(difOneRange==n)
				{
					cout<<"Alice"<<endl;
				}
				else
				{

					cout<<"Bob"<<endl;
				}
			}
			else{

				if(difOneRange==n)
				{
					// cout<<"hds"<<endl;
					cout<<"Bob"<<endl;
				}
				else
				{
					cout<<"Alice"<<endl;
				}
			}
		}
		else
		{
			cout<<"Alice"<<endl;
		}
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
