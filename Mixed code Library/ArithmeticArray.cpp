#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		double n;
		cin>>n;
		double sum=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			sum+=x;
		}
		
		if(sum/n==1)
		{
			cout<<0<<endl;
		}
		else if(sum>0)
		{
			if(sum<n)
			{
				cout<<1<<endl;
			}
			else
			{
				cout<<sum-n<<endl;
			}
		}
		else
		{
			cout<<1<<endl;
		}
	}	
	
}