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
		int cnt=0;;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x>i+cnt)
			{
				cnt+=(x-i-cnt);
			}
		}
		cout<<cnt<<endl;
	}
}	