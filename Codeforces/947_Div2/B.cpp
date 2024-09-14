#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 


	std::vector<int> v(n);
	set<int>st;

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		st.insert(v[i]);
	}

	if(st.size()==1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		int mn1,mn2;


		for(auto x:st)
		{
		
				mn1=x;
				break;

			
		}

		for(auto x:st)
		{
			if(x%mn1==0)
			{
				continue;
			}
			else
			{
				mn2=x; 
				break;
			}
		}

		// cout<<mn1<<" "<<mn2<<endl;

		for(int i=0;i<n;i++)
		{

			// cout<<v[i]%mn1<<" "<<v[i]%mn2<<endl;
			if(v[i]%mn1!=0&&v[i]%mn2!=0)
			{
				cout<<"NO"<<endl;
				return ;
			}
		}
		cout<<"YES"<<endl;
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
