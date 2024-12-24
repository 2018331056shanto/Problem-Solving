#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		std::vector<long int> v;
		long int n,k;
		cin>>n>>k;
		set<long int>s;
		long int mex=2e9;
		long int mx=0;
		for(int i=0;i<n;i++)
		{
			long int x;
			cin>>x;
		    v.push_back(x);
			mx=max(mx,x);
			s.insert(x);

		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			if(v[i]!=i)
			{
				mex=i;
				break;
			}

		}
		
		long int val=mx+mex;
		if(val%2==0)
		{
			val=(mx+mex)/2;
		}
		else
		{
			val=(mx+mex)/2+1;
		}
		if(k==0)
		{
			int p=0;

		}
		else
		{
			s.insert(val);
		}
		

		//cout<<val<<" "<<mex<<" "<<mx<<endl;
		if(mex>mx)
		{
			//cout<<s.size()<<endl;
			cout<<n+k<<endl;
		}
		else
		{
			cout<<s.size()<<endl;
		}
		
	}
}	