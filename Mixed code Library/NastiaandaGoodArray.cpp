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
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
			
			
		}
		int small=int(min_element(v.begin(), v.end())-v.begin());
		cout<<n-1<<endl;
		for(int i=0;i<n;i++)
		{
			if(i!=small)
			{
				cout<<i+1<<" "<<small+1<<" "<<v[small]+abs(i-small)<<" "<<v[small]<<endl;

			}

		}
	}
}	