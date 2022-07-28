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
		int idx=0;
		std::vector<int> v;
		
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);

		}
		int mxi=0;
		int mni=0;
		for(int i=0;i<n;i++)
		{
			if(v[i]==n)
			{
				mxi=i+1;
			}
			if(v[i]==1)
			{
				mni=i+1;
			}
		}
		int mm=min(mxi,mni)+n-max(mxi,mni)+1;
		int l=n-min(mxi,mni)+1;
		int k=max(mxi,mni);
		cout<<min(mm,min(l,k))<<endl;
		
		
	}
}	