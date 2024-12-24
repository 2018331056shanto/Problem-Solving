#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	vector<int>balance(n+1);

	for(int i=0;i<n;i++)
	{
		if(s[i]=='(')
		{
			balance[i+1]=balance[i]+1;
		}
		else
		{
			balance[i+1]=balance[i]-1;
		}
	}	

	for (int i = 0; i < (n+1); ++i)
	{
		/* code */
		cout<<balance[i]<<" ";
	}
	cout<<endl;

	if(balance.back()!=0)
	{
		cout<<-1<<endl;
		return;
	}


	if(*min_element(balance.begin(),balance.end())==0||*max_element(balance.begin(),balance.end())==0)
	{

		cout<<1<<endl;

		for(int i=0;i<n;i++)
		{
			cout<<1<<" ";
		}
		cout<<endl;
	}
	else{
		cout<<2<<endl;

		vector<int>ans;
		int cur=0;
		while(cur<n)
		{


			int x= (s[cur]=='('?1:2);

			do{

				cur++;
				ans.push_back(x);
			}
			while(balance[cur]!=0);
		}

		for(auto x:ans)
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
