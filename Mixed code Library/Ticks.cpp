#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int>>st;
int mt[22][22]={0};
int n,m,kk;
int cc=0;
int  f2(int k,int l)
{

	--k;
	++l;
	//cout<<"cc"<<cc<<endl;
	cout<<k<<" "<<l<<endl;
	//cc++;
	int ll=0;
	while(mt[k][l]!=0&&k>=0&&l<m)
	{
		++ll;
		mt[k][l]=2;
		--k;
		++l;
		//cout<<"ll "<<ll<<endl;
		//cout<<k<<" "<<l<<endl;

	}
	//cout<<ll<<endl;
	return ll;
}
void f1(int i,int j)
{
	st.push({i,j});
	int k=i;
	int l=j;
	++k;
	++l;
	//cout<<k<<l<<endl;
	int cnt=0;
	while(mt[k][l]!=0&&k<n&&l<m)
	{
		++cnt;
		st.push({k,l});
		
		mt[k][l]=2;
		++k;
		++l;
		//cout<<"fuck"<<endl;
		//cout<<k<<" "<<l<<endl;
	}
	//cout<<cnt<<endl;
	int cnt1=f2(--k,--l);
	//cout<<cnt1<<endl;
	//cout<<st.top().second<<endl;
	if(cnt1==cnt&&cnt1>=kk)
		return;
	else
	{
		while(!st.empty())
		{
			st.pop();
			--cnt;
			// cout<<st.top().first<<" "<<st.top().second<<endl;
			 //cout<<"cnt "<<cnt<<endl;
			int s=st.top().first;
			int o=st.top().second;
			int cnta=f2(s,o);
			//cout<<"cnta "<<cnta<<endl;
			if(cnta==cnt&&cnta>=kk)
			{
				//cout<<"hhhh"<<endl;
				while(!st.empty())
					st.pop();
				break;
			}

		}
	}


}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		
		
		cin>>n>>m>>kk;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				char x;
				cin>>x;
				if(x=='*')
				{
					mt[i][j]=1;
				}
			}
		}
		
			
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(mt[i][j]==1||mt[i][j]==2)
					{
						mt[i][j]=2;
					 // cout<<i<<" "<<j<<endl;
						f1(i,j);
						
						
					}
					else 
						continue;
				}
			}
			bool flag=true;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(mt[i][j]==2)
						flag=true;
					else
					{
						flag=false;
						break;
					}

				}
			}
			if(flag)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		
	}
}	