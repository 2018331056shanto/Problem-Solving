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
		if(n%2==0)
		{
			int k=2;
			int l=1;
			for(int i=1;i<=n/2;i++)
			{
				cout<<k<<" ";
				k+=2;
				cout<<l<<" ";
				l+=2;

			}
			cout<<endl;
		}
		else
		{
			int k=2;
			int l=1;
			for(int i=1;i<n/2;i++)
			{
				cout<<k<<" ";
				k+=2;
				if(i==n/2)
					break;
				cout<<l<<" ";
				l+=2;

			}
			cout<<l+2<<" "<<l<<" "<<k<<endl;
		}
	}
}	