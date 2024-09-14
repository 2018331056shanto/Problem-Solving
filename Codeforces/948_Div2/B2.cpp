#include<bits/stdc++.h>
using namespace std;


void solve(){

	int x;
	cin>>x; 

	vector<int>bin;

	while(x>=1)
	{
		
		if(x&1)
		{
			bin.push_back(1);
		}
		else
		{
			bin.push_back(0);
		}
		x=(x>>1);

	}

	reverse(bin.begin(),bin.end());
	for(int i=0;i<bin.size();i++)
	{
		cout<<bin[i]<<" ";
	}
	cout<<endl;

	vector<int>ans;
	int i=0;

	while(i<bin.size())
	{
		// for(int l=0;l<ans.size();l++)
		// {
		// 	cout<<"ans "<<endl;
		// 	cout<<ans[l]<<" ";

		// }
		// cout<<endl;
		if(bin[i]==1)
		{
			
				int j=i;
				while(j<bin.size())
				{
					if(bin[j]==1)
					{
						j++;
						// continue;
					}
					else
					{
						break;
					}
				}
				// cout<<"hdlad : j : "<<j<<endl;

				--j;

				if(j-i==0)
				{
					
					ans.push_back(bin[i]);
					i++;
					cout<<"hdlad das"<<endl;

				}
				else
				{
					cout<<"fuck me dadddy"<<endl;
					if(ans.size()!=0)
					{

						ans.pop_back();
					}
					ans.push_back(-1);

					for(int k=i+1;k<=j;k++)
					{
						ans.push_back(0);
					}
					ans.push_back(1);
					cout<<"else 1 1 1 : "<<endl;
					for(int l=0;l<ans.size();l++)
					{
						cout<<ans[l]<<" ";
					}
					cout<<endl;

					cout<<"net  j "<<j<<endl;
					if(j+1<bin.size())
					{
						bin[j+1]=1;
					
					}
					i=j+1;

					for(auto x:bin)
					{
						cout<<x<<" ";
					}
					cout<<endl;
					

				}
			
			
		}
		else
		{
			ans.push_back(0);
			i++;
		}

	}

	for(int k=0;k<ans.size();k++)
	{
		cout<<ans[k]<<" ";
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
