#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		int mn1=0;
		int mn2=0;
		int mn=1e9;
		int idx=0;
		for(int i=0;i<n-1;i++)
		{
			int dif=v[i+1]-v[i];
			if(dif<=mn)
			{
				mn=dif;
				mn1=v[i];
				mn2=v[i+1];
				idx=i;
			}

		}
		// cout<<mn2<<" "<<mn1<<" "<<idx<<endl;
		if(n==2)
		{
			cout<<mn1<<" "<<mn2<<endl;

		}
		else{


		cout<<mn2<<" ";
		for(int i=idx+2;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		for(int i=0;i<idx;i++)
		{

			cout<<v[i]<<" ";
		}
		cout<<mn1<<endl;
	}
	}	
	
}