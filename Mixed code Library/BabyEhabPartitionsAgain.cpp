#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	int a[2008];
	int sum=0;
	int odd=0;
	int idx=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(a[i]%2)
		{
			idx=i+1;

		}

	}
	// cout<<sum<<endl;
	// cout<<a[50]<<endl;
	if(sum%2)
	{
		cout<<0<<endl;
	}
	else
	{
		if(idx!=0)
		{

			cout<<1<<endl;
			cout<<idx<<endl;
		}
		else
		{ bool falg=false;
			    int id=0;
			for (int i = 0; i < (n); ++i)
			{
				int x=a[i];
			    //cout<<x<<endl;
				while(x>2)
				{
					x/=2;
					//cout<<x<<endl;
					if(x%2)
					{
						id=i+1;
						falg=true;
						break;
					}
				}
				if(falg)
				{
					break;
				}
				

			}
			if(falg)
			{
				cout<<1<<endl;
				cout<<id<<endl;
			}
			
			else
			{
				cout<<0<<endl;
			}
		}

	}
}	