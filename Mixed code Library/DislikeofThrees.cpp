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
		for(int i=1;i<5000;i++)
		{
			if(i%3==0||i%10==3)
				continue;
			else
				v.push_back(i);
		}
		cout<<v[n-1]<<endl;
	}
}	