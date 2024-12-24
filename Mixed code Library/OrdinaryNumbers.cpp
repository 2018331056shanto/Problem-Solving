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
		int cnt=0;
		int k=n;
		while(n>0)
		{
			cnt++;
			n/=10;

		}
		if(cnt<2)
		{
			cout<<k<<endl;
		}
		else
		{
			int l=0;
			for(int i=0;i<cnt;i++)
			{
				l+=1*pow(10,i);

			}
			//cout<<l+1<<endl;
			cout<<9*(cnt-1)+(k/l)<<endl;

		}
	}
}	