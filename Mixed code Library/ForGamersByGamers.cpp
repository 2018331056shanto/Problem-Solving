#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,C;
	cin>>n>>C;
	std::vector<long long> bst(C+1);
	for(int i=0;i<n;i++)
	{
		long long  c,d,h;
		cin>>c>>d>>h;
		bst[c]=max(bst[c],d*h);
	}	
	for(int c=1;c<=C;c++)
	{
		for(int xc=c;xc<=C;xc+=c)
		{
			bst[xc]=max(bst[xc],bst[c]*(xc/c));
		}
	}
	// for(int x:bst)
	// 	cout<<x<<" ";
	// cout<<endl;
	for(int i=0;i<C;i++)
	{
		bst[i+1]=max(bst[i+1],bst[i]);
	}
	// for(int x:bst)
	// 	cout<<x<<" ";
	long long m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		long long D,H;
		cin>>D>>H;
		long long mn=upper_bound(bst.begin(),bst.end(),D*H)-bst.begin();
		if(mn>C)
		{

			mn=-1;
		}
		cout<<mn<<" ";
	}
	cout<<endl;

	
}