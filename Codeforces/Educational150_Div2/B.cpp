#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	string s="1";
	int cnt=0;
	int last=0;
	for(int i=1;i<n;i++)
	{
		if(v[i]>=v[last]&&cnt==0)
		{
			s+="1";
			last=i;
		}
		else if(v[i]<v[last]&&cnt==0&&v[0]>=v[i])
		{
			
					s+="1";
					last=i;
					
				
					cnt++;
			
			
		}
		else if(v[last]<=v[i]&&v[i]<=v[0])
		{
			s+="1";
			last=i;
			
		}
		else
		{
			s+="0";
		}

	}
	cout<<s<<endl;

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
