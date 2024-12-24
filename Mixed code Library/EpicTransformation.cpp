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
		sort(v.begin(),v.end());
		v.push_back(0);
		int mx=-1;
		int cnt=1;
		for(int i=0;i<v.size();i++)
		{

			if(v[i]==v[i+1])
			{
				cnt++;
			//	cout<<"cnt "<<cnt<<endl;

			}
			else
			{
				mx=max(cnt,mx);
				cnt=1;
			}
			
		}
		if(mx>(n-mx))
		{
			cout<<mx-(n-mx)<<endl;
		}
		else
		{
			if(n%2==0)
			{
				cout<<"0"<<endl;
			}
			else
			{
				cout<<"1"<<endl;
			}
		}
		//cout<<mx<<endl;
	}
}	