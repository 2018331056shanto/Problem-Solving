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
		int a[102];
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		x=a[0];
		for(int i=1;i<n;i++)
		{
			x&=a[i];
		}

		cout<<x<<endl;
		
		
	}
}	