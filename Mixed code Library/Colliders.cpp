#include<bits/stdc++.h>
using namespace std;
#define mx 100007


std::vector<int> divisor[mx];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	for(int i=2;i<=mx;i++)
	{
		if(divisor[i].size()==0)
		{
			for(int j=i;j<=mx;j+=i)
			{
				divisor[j].push_back(i);
			}
		}
		
	}
	int ans[mx];
	memset(ans,0,sizeof(0));
	int flag[mx];
	memset(flag,0,sizeof(flag));
	int n,m;
	cin>>n>>m;
	

	for(int i=0;i<m;i++)
	{
		string s;
		cin>>s;
		int x;
		cin>>x;
		if(s=="+")
		{
			int conflict=-1;
			if(flag[x]==1)
			{
				
				cout<<"Already on"<<endl;
				

			}
			else
			{

				for(int j=0;j<divisor[x].size();j++)
			{
				if(ans[divisor[x][j]]!=0)
				{
					conflict=ans[divisor[x][j]];
				}
			}
			if(conflict==-1)
			{
				cout<<"Success"<<endl;
				for(int j=0;j<divisor[x].size();j++)
				{
					ans[divisor[x][j]]=x;
				}
				// cout<<"hello "<<x<<endl;
				flag[x]=1;
			}
			else
			{
				cout<<"Conflict with "<<conflict<<endl;
			}
			}
			
			
		}
		else
		{
			if(flag[x]==0)
			{
				cout<<"Already off"<<endl;
			}
			else
			{
				cout<<"Success"<<endl;
				for(int j=0;j<divisor[x].size();j++)
				{
					ans[divisor[x][j]]=0;
				}
				flag[x]=0;
			}

		}
	}
	
	
}