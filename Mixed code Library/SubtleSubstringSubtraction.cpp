	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		string s;
		cin>>s;
		if(s.size()==1)
		{
			cout<<"Bob"<<" "<<int(s[0])-int('a')+1<<endl;
			return ;

		}
		if(s.size()%2==0)
		{
			int sum=0;
			for(int i=0;i<s.size();i++)
			{
				sum+=int(s[i])-int('a')+1;
			}
			cout<<"Alice "<<sum<<endl;
			return ;
		}
		if(s[0]>s[s.size()-1])
		{
			int sum=0;
			for(int i=0;i<s.size()-1;i++)
			{
				sum+=int(s[i])-int('a')+1;
			}
			cout<<"Alice "<<sum-int(s[s.size()-1]-int('a')+1)<<endl;
			return ;
		}
		else
		{

			int sum=0;
			for(int i=1;i<s.size();i++)
			{
				sum+=int(s[i])-int('a')+1;
			}
			cout<<"Alice "<<sum-int(s[0]-int('a')+1)<<endl;
			return ;
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