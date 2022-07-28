#include<bits/stdc++.h>
using namespace std;
std::vector<int> v[1000];
int vis[1000];
int nvis[1000];
int cnt=0;
int vertices=0;
// void  dfs(int start)
// {
// 	vertices++;
// 	//cout<<start<<endl; 
// 	nvis[start]=1;
// 	for(int i=0;i<v[start].size();i++)
// 	{
// 		int x=v[start][i];
// 		if(!nvis[x])
// 		{
// 			nvis[x]=1;

// 			dfs(x);
			
// 		}
// 	}
// }
int  bfs(int start,int tlt)
{
	int nod=0;
	
	vis[start]=1;
	queue<int>q;
	q.push(start);
	int val=0;
	int flag=0;
	int mark=0;
	while(!q.empty())
	{
		flag++;
		int f=q.front();
		q.pop();
		if(flag>1)
		if(val==f)
			{
				//cout<<"val "<<val<<endl;
				//cout<<"fuck"<<endl;
			mark=1;
			tlt--;
			}
		for(int i=0;i<v[f].size();i++)
		{
			
			int x=v[f][i];
			if(!vis[x])
			{
				vis[x]=1;
				q.push(x);
				nod++;
				if(flag==1)
				{
					if(i+1==v[f].size())
				{
					val=x;
					//cout<<"i am,"<<x<<endl;
					tlt--;
				}
				}
				else
				{
					if(mark)
					{
						if(i+1==v[f].size())
						{
							val=x;
							mark=0;
							
						}
					}
				}
				
				//cout<<x<<endl;
			}
		}
		if(tlt<=0)
			break;
		
	}
	//cout<<vertices<<endl;
	return nod;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;

	while(cin>>n)
	{
		set<int>st;
		st.clear();
		int l=0;
		for(int i=0;i<1000;i++)
		{
			v[i].clear();
		}
	
		vertices=0;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
			st.insert(x);
			st.insert(y);
			

		}
		//cout<<"l "<<l<<endl;
		
		// dfs(l);
		
		int start,tlt;
		while(cin>>start>>tlt)
		{
			if(start==0&&tlt==0)
				break;
			cnt++;

			memset(vis,0,sizeof(vis));
			memset(nvis,0,sizeof(nvis));
			
			//cout<<vertices<<endl;
			int ans=bfs(start,tlt);
			//cout<<"vertices "<<vertices<<endl;
			//cout<<"nod reachablea "<<ans<<endl;
			if(ans==0)
			{
				cout<<"Case " <<cnt<<": " <<st.size()-ans<< " nodes not reachable from node "<<start<<" with TTL = "<<tlt<<"."<<endl;
			}
			else
			cout<<"Case " <<cnt<<": " <<st.size()-ans-1<< " nodes not reachable from node "<<start<<" with TTL = "<<tlt<<"."<<endl;

		} 
		// for(int i=0;i<n;i++)
		// {
		// 	for(int j=0;j<v[i].size();j++)
		// 	{
		// 		cout<<v[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
	}
		
}