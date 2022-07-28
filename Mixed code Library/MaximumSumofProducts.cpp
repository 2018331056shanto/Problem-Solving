#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	std::vector<long long int>a,b;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		b.push_back(x);
	}
	long long int total=0;
	for(int i=0;i<n;i++)
	{
		total+=a[i]*b[i];
	}
	long long int best=total;
	
	for(int center=0;center<n;center++)
	{
		long long int current=total;
		for(int x=center-1,y=center+1;x>=0&&y<n;x--,y++)
		{
			current-=a[x]*b[x]+a[y]*b[y];
			current+=a[x]*b[y]+a[y]*b[x];
			best=max(current,best);
		}
	}
	for(int between=0;between<n-1;between++)
	{
		long long int current=total;
		for(int x=between,y=between+1;x>=0&&y<n;x--,y++)
		{
			current-=a[x]*b[x]+a[y]*b[y];
			current+=a[x]*b[y]+a[y]*b[x];
			best=max(current,best);
		}
	}
	cout<<best<<endl;
}	 