#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		std::vector<int> v;
	   if(n>k)
	   {
	   	for(int i=k+1;i<=n;i++)
	   	{
	   		v.push_back(i);
	   	}
	   	int l=k/2;
	   	for(int i=k-1;i>=k-l;i--)
	   	{
	   		v.push_back(i);
	   	}
	   }
	   else
	   {
	   	int l=k/2;
	   	for(int i=k-1;i>=k-l;i--)
	   	{
	   		v.push_back(i);
	   	}
	   }
	   cout<<v.size()<<endl;
	   for(int i=0;i<v.size();i++)
	   {
	   	cout<<v[i]<<" ";
	   }
	   cout<<endl;
	}
}
		

		