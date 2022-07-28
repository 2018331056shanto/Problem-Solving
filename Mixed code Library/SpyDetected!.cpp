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
		int a[1000];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int b=a[1];
		int idx=0;
		int cnt=0;
		for(int i=2;i<=n;i++)
		{
			if(a[i]==b)
			{
				cnt++;
			}

		}
		if(cnt==0)
		{
			cout<<"1"<<endl;
		}
		else
		{
			for(int i=1;i<=n;i++)
		{
			if(a[i]!=b)
			{
				cout<<i<<endl;
				break;
			}
		}
		}
		
	}
}	