#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int sz;
		string s;
		int psum=0;
		std::vector<int> v;
		cin>>s;
		s+="2";
		//cout<<s<<endl;
		sz=s.size();
		int cnt1=0,cnt0=0;
		for(auto x:s)
		{
			if(x=='0')cnt0++;
			if(x=='1')
				cnt1++;
		}
		int p0=0;
		for(int i=0;i<sz;i++)
		{
			if(s[i]=='0'&&s[i+1]=='0')
			{
				++p0;
			}
			else
			{
				v.push_back(p0+1);
				p0=0;
			}
		}
		int ll=0;
		 for(auto l:v)
		 	
		 	{
		 		if(l>1)
		 		{
		 			ll++;
		 			psum+=l;
		 		}
		 	}
		
		//cout<<psum<<endl;
		if(sz-1==cnt0)
			cout<<1<<endl;
		else if(sz-1==cnt1)
			cout<<0<<endl;
		else
		{

			int ss=(cnt0-psum)+ll;
			//cout<<ss<<endl;
			if(ss>2)
			{
				cout<<2<<endl;
			}
			else
			{
				cout<<ss<<endl;
			}
		}
	}
}	