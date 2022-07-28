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
		int cnt=1;
		while((1<<cnt)<=n)
		{
			cnt++;
		}
		

		cout<<(1<<(cnt-1))-1<<endl;
	}
}	