	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		int n,m;
		cin>>n>>m;
		
		vector<vector<char>>v(n,vector<char>(m));

		int cnt1=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				char x;
				cin>>x;
				if(x=='1')cnt1++;
				v[i][j]=x;
			}
		}
		
	int x[]={0,0,1,-1,1,1,-1,-1};
	int y[]={1,-1,0,0,1,-1,1,-1};
	int flag=0;
	int flag2=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(v[i][j]=='0')

				{
					// cout<<"hello"<<endl;
					for(int k=0;k<8;k++)
					{

						if((i+x[k]>=0&&i+x[k]<n)&&(j+y[k]>=0&&j+y[k]<m))
						{
							//  cout<<"i j "<<i<<" "<<j<<endl;
							// cout<<"x k :"<<x[k]<<" "<<y[k]<<endl;
							int ii=i+x[k];
							int jj=j+y[k];
							if(v[ii][jj]=='0')
							{
								flag=1;
								// cout<<ii<<" "<<jj<<endl;
								break;
							}
						}
					

					}
					if(flag)
						break;
					
				}
			}
			if(flag)
				break;
			
		}
		// cout<<flag<<endl;
		 if(flag)
		{
			cout<<cnt1<<endl;
		}
		else if(cnt1!=(n*m))
		{
			cout<<cnt1-1<<endl;
		}
		else
		{
			if(cnt1==n*m)
			{
				cout<<cnt1-2<<endl;
			}
			else
			{
				cout<<0<<endl;
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