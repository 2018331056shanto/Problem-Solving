#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin>>n;
	vector<int>v(n);

	int id1=0;
	int id2=0;
	int idn=0;

	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(x==1)
		{
			id1=i;
		}
		else if(x==2)
		{
			id2=i;
		}
		else if(x==n)
		{
			idn=i;
		}

	}
	if(n<=2)
	{
		cout<<1<<" "<<1<<endl;
	}
	else
	{
		if(idn>id1&&idn<id2||idn>id2&&idn<id1)
		{
			cout<<id1<<" "<<id1<<endl;
		}
		else
		{
			if(id1<id2&&idn>id2)
			{
				cout<<id2<<" "<<idn<<endl;
			}
			else if(id2<id1&&idn>id1)
			{
				cout<<id1<<" "<<idn<<endl;
			}
			else if(id1<id2&&idn<id1)
			{
				cout<<idn<<" "<<id1<<endl;
			}
			else if(id2<id1&&idn<id2)
			{
				cout<<idn<<" "<<id2<<endl;
			}

		}
	}

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
