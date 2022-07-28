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
		int a[200],b[100];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int x=0;
		std::vector<int> v,c;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=a[i+1])
			{
				v.push_back(a[i]);
			}
			else
			{
               b[x]=a[i];
               x++;
			}

		}
		for(int i=x-1;i>=0;--i)
		{
			v.push_back(b[i]);

		}
		
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;

	}
}	