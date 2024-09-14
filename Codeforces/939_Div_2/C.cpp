#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n; 
	cin>>n; 
	std::vector<vector<int>> v(n+1,vector<int>(n+1,0));

	if(n==1)
	{
		cout<<1<<" "<<1<<endl;
		cout<<1<<" "<<1<<" "<<1<<endl;
	}
	else{

		for(int i=n;i>=1;i--)
		{

			int k=1;
			for(int j=1;j<=n;j++)
			{
				v[j][i]=k;
				k++;
			}

			k=1; 
			for(int j=1;j<=n;j++)
			{
				v[i][j]=k; 
				k++;
			}
		}

		int totalSum=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				totalSum+=v[i][j];
			}
			
		}

		cout<<totalSum<<" "<<2*n<<endl;

		for(int i=n;i>=1;i--)
		{
			cout<<2<<" "<<i<<" "; 
			for(int j=1;j<=n;j++)
			{
				cout<<j<<" ";
			}
			cout<<endl;

			cout<<1<<" "<<i<<" ";
			for(int j=1;j<=n;j++)
			{
				cout<<j<<" ";
			}
			cout<<endl;

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
