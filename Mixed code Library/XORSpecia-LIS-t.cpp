
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

		std::vector<int>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
	int l=n-1;
	while(l>=0)
	{
		for(int i=l;i>=0;i--)
	{
		if(v[i]%(i+2)!=0)
		{
			int x=v[i];
			// vector<int>::iterator it;
			// it=remove(v.begin(), v.end(),x);

			v.erase(v.begin()+i);
			for(int j=0;j<v.size();j++)
			{
				cout<<v[j]<<" ";
			}
			cout<<endl;
			l=v.size()-1;
			cout<<l<<endl;

		}
		else
		{
			l--;
			//cout<<l<<endl;
		}

		
	}
	}
	
	  cout<<(v.size()==0?"YES":"NO")<<endl;
	}
	
	
}	