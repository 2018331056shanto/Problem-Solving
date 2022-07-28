#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,k;
		cin>>a>>b>>k;
		vector<int> v,v1;
	for(int i=0;i<k;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<k;i++)
	{
		int x;
		cin>>x;
		v1.push_back(x);
	}
	std::map<int, int> ma,mb;
	for(int i=0;i<k;i++)
	{
		ma[v[i]]+=1;
		mb[v1[i]]+=1;
	}
	long long int ans=0;
	//cout<<endl;
	for(int i=0;i<k;i++)
	{
		ans+=(k-1)-(ma[v[i]]-1)-(mb[v1[i]]-1);

	}
	cout<<ans/2<<endl;


	}

}