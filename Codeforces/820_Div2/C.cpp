	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		string s;
		cin>>s;
		int x=(int)s[0];
		int y=(int)s[s.size()-1];
		bool flag=false;
		if(x>y){
			swap(x,y);
			flag=true;
		}
		multimap<char,int>mt;

		int sum=y-x;
		int jmp=0;
		
		for(int i=0;i<s.size();i++)
		{
			int z=(int)s[i];
			if(z>=x&&z<=y)
			{
				jmp++;
				if(i+1==s.size()|| i==0)
					continue;
				mt.insert({s[i],i+1});
				
			}
		}
		cout<<sum<<" "<<jmp<<endl;
		cout<<1<<" ";
		vector<int>v;
		for(auto x:mt){
			
				v.push_back(x.second);
			

		}	
		if(flag){
			for(int i=v.size()-1;i>=0;i--)
			{
				cout<<v[i]<<" ";
			}
		}
		else{
			for(int i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
		}
		cout<<s.size()<<endl;
		// cout<<endl;
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