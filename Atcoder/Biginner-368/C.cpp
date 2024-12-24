#include<bits/stdc++.h>
using namespace std;

/*
1
8
75
742 -- 741
7407
74074
740741
7407408
74074075

82304531
*/


void solve(){
	
	long long n;
	cin>>n;

	std::vector<long long> v(n);


	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	// int l;
	// l=v[0];
	// int p=0; 

	// while(l>0)
	// {
	// 	++p;
	// 	if(p%3==0)
	// 	{
	// 		l-=3;
	// 	}
	// 	else
	// 	{
	// 		--l;
	// 	}
	// }

	// cout<<p<<endl;

	long long T=0; 

	for(int i=0;i<n;i++)
	{


		int x=(v[i]/5);
		int mod=v[i]%5;


		// cout<<x<<" "<<mod<<endl;
		long long tmp=(x*3)+mod;

		while(mod>0)
		{
			T++;
			if(T%3==0)
			{
				mod-=3;
			}
			else
			{
				mod--;
			}
		}

		T+=x*3;

	}
	cout<<T<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
