 #include<bits/stdc++.h>
 using namespace std;
 std::vector<int> v[2000];
 int vis[2000];
 int color[2000];
 int bfs(int x)
 {
 	queue<int>q;
 	q.push(x);
 	vis[x]=1;
 	color[x]=1;
 	while(!q.empty())
 	{
 		int f=q.front();
 		q.pop();
 		for(int i=0;i<v[f].size();i++)
 		{
 			if(!vis[v[f][i]])
 			{
 				q.push(v[f][i]);
 				vis[v[f][i]]=1;
 				if(color[v[f][i]]==0)
 				{
 				if(color[f]==1)
 				{
 					color[v[f][i]]=2;
 				}
 				else
 				{
 					color[v[f][i]]=1;
 				}
 			}

 			}
 			if(color[f]==color[v[f][i]])
 			{
 				return 0;
 			}
 		}
 	}
 	return 1;
 }
 void init()
 {
 	for(int i=0;i<2000;i++)
 	{
 		v[i].clear();
 	}
 	memset(vis,0,sizeof(vis));
 	memset(color,0,sizeof(color));
 }
 int main()
 {   int t;
 	 while(true)
	 {	cin>>t;
	 	if(t==0)
	 	{

	 		return 0;
	 	}
 		
 		
	
 		int e;
 		cin>>e;
 		init();
 		while(e--)
 		{
 			int x,y;
 			cin>>x>>y;
 			v[x].push_back(y);
 			v[y].push_back(x);
 		}

        
 		if(bfs(0))
 		{
 			cout<<"BICOLORABLE."<<endl;
 		}
 		else
 		{
 			cout<<"NOT BICOLORABLE."<<endl;
 		}
	 }
 }
 
 		
 
 		