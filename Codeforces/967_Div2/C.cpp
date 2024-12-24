#include<bits/stdc++.h>
using namespace std;

const int N=1000+20;

int n,par[N];

int ask(int a,int b)
{
	cout<<"? "<<a+1<<' '<<b+1<<endl;
	int x;
	cin>>x;
	x--;
	return x;
}

void solve(){
	

	cin>>n; 

	for(int i=0;i<n;i++)
	{
		par[i]=-1;
	}

	for(int i=1;i<n;i++)
	{
		int last=0;

		while(true)
		{
			int x=ask(i,last);

			if(x==i)
			{
				break;
			}
			last=x;
		}
		par[i]=last;
	}

	cout<<"! ";

	for(int i=1;i<n;i++)
	{
		cout<<par[i]+1<<" "<<i+1<<" ";
	}
	cout<<endl;
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
