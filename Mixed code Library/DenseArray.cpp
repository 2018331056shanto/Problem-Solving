#include<bits/stdc++.h>
using namespace std;
bool f(int x,int y)
{
	if(2*x>=y)
	 return true;
    return false;
}
int z(int x,int y)
{
	int k=0;
	while(2*x<y)
	{
		x*=2;
		k++;
	}
	return k;
}
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
		int n;
		cin>>n;
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int k=0;
		for(int i=1;i<n;i++)
		{
			if(f(min(v[i],v[i-1]),max(v[i],v[i-1])))
			{
				continue;
			}
            k+=z(min(v[i],v[i-1]),max(v[i],v[i-1]));
           
		}
		cout<<k<<endl;
	}
}