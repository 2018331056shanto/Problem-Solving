#include<iostream>
#include<utility>
#include<climits>
#include<vector>
#include<algorithm>
#include<queue>


using namespace std;


//2d Matrix

// 1
// 5
// 1 2 3 4 5
// 2 x 2 x 1
// 2 3 4 x x
// x x 3 x x
// x x 5 1 2


// 1
// 5
// 1 2 3 4 5
// 2 x 2 x 1
// 2 0 4 x x
// x x 3 5 1
// x x 5 1 2  

// const int mx=1005;

// int n;

// char arr[mx][mx];

// bool isVal(int i,int j)
// {
// 	return (i>=0&&i<n&&j>=0&&j<n);
// }

// pair<int,int>recursion(int i,int j,vector<vector<pair<int,int>>>&dp)
// {
// 	if(!isVal(i,j))
// 	{
// 		return {INT_MIN,INT_MIN};
// 	}


// 	if(i==n-1&&j==n-1)
// 	{
// 		return {0,1};
// 	}

// 	if(arr[i][j]=='x')
// 	{
// 		return {INT_MIN,INT_MIN};
// 	}

// 	if(dp[i][j].first!=-1)
// 	{
// 		return {dp[i][j].first,dp[i][j].second};
// 	}


// 	int m=INT_MIN;
// 	int cnt=0;
// 	pair<int,int>x=recursion(i+1,j,dp);
// 	pair<int,int>y=recursion(i,j+1,dp);
// 	pair<int,int>z=recursion(i+1,j+1,dp);

// 	m=max(x.first,max(y.first,z.first));


// 	if(m==x.first)
// 	{
// 		cnt+=x.second;
// 	}

// 	if(m==y.first)
// 	{
// 		cnt+=y.second;
// 	}

// 	if(m==z.first)
// 	{
// 		cnt+=z.second;
// 	}


// 	dp[i][j].first=m+(arr[i][j]-'0');
// 	dp[i][j].second=cnt;

// 	return dp[i][j];


// }

// void solve()
// {
// 	cin>>n; 

// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			cin>>arr[i][j];
// 		}
// 	}


// 	arr[0][0]=arr[n-1][n-1]='0';
// 	vector<vector<pair<int,int>>>dp(n+4,vector<pair<int,int>>(n+4,{-1,-1}));

// 	pair<int,int>ans=recursion(0,0,dp);

// 	cout<<ans.first<<" "<<ans.second<<endl;

// }

// int main()
// {
// 	solve();
// }


//=========================================================================================


//Aggrassive  Cow
// int n,c;


// bool canWePlace(vector<int>&v,int mid)
// {
// 	int countCows=1; 
// 	int last=v[0];
// 	for(int i=1;i<n;i++)
// 	{
// 		if(v[i]-last>=mid)
// 		{
// 			countCows++; 
// 			last=v[i];
// 		}
// 	}

// 	if(countCows>=c)
// 	{
// 		return true;
// 	}
// 	return false;
// }


// int binarySearch(vector<int>&v)
// {
// 	int low=1;
// 	int high=v[n-1]-v[0];


// 	while(low<=high)
// 	{

// 		int mid=(low+high)/2;

// 		if(canWePlace(v,mid))
// 		{
// 			low=mid+1;
// 		}
// 		else
// 		{
// 			high=mid-1;
// 		}


// 	}

// 	return high;
// }


// void solve()
// {
// 	cin>>n>>c;

// 	vector<int>v(n);

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>v[i];
// 	}

// 	sort(v.begin(),v.end());


// 	int ans=binarySearch(v);
// 	cout<<ans<<endl;

// 	int last=v[0];

// 	vector<int>position;
// 	position.push_back(v[0]);
// 	for(int i=1;i<n;i++)
// 	{
// 		if(v[i]-last>=ans)
// 		{
// 			position.push_back(v[i]);
// 			last=v[i];
// 		}
// 	}
// 	// cout<<endl;

// 	for(auto x:position)
// 		cout<<x<<" ";

// 	cout<<endl;

// }
// int main()
// {
// 	solve();
// }

//================================================================

//Bipartite
// const int mx=1005;

// vector<int>adj[mx];


// int n,m;



// void solve()
// {
// 	cin>>n>>m; 

// 	for(int i=0;i<m;i++)
// 	{
// 		int x,y;
// 		cin>>x>>y; 

// 		adj[x].push_back(y);
// 		adj[y].push_back(x);
// 	}

// 	vector<int>color(n+4,-1);


// 	queue<int>q; 
// 	q.push(0);
	
// 	bool isBipartite=true;
// 	while(!q.empty()&&isBipartite)
// 	{
// 		int t=q.front();

// 		q.pop();

// 		for(int i=0;i<adj[t].size();i++)
// 		{

// 			int nextT=adj[t][i];

// 			if(color[nextT]==-1)
// 			{
// 				color[nextT]=1-color[t];
// 				q.push(nextT);
// 			}

// 			else if(color[nextT]==color[t])
// 			{
// 				isBipartite=false;
// 				break;
// 			}
// 		}
// 	}


// 	if(!isBipartite)
// 	{
// 		cout<<-1<<endl;
// 	}

// 	else {
// 		for(int i=0;i<n;i++)
// 		{
// 			if(color[i])
// 			{
// 				cout<<i<<" ";
// 			}
// 		}
// 		cout<<endl;
// 	}

// }


// int main()
// {
// 	solve();
// }

// 3 4

// 0 1
// 0 2
// 1 3
// 2 3

// 2 3

// 0 1
// 0 2
// 1 2


// ========================================================================

// Burst Ballon Optimally

// 4
// 1 2 3 4

// int burst(vector<int>&v,vector<vector<int>>&dp,int i,int j)
// {

// 	if(i>j)
// 	{
// 		return 0;
// 	}

// 	if(i==j)
// 	{
// 		return v[i-1]*v[i+1];
// 	}

// 	if(dp[i][j]!=-1)
// 	{
// 		return dp[i][j];
// 	}

// 	int tmp=INT_MIN;
// 	int ans=INT_MIN;
// 	for(int k=i;k<=j;k++)
// 	{
// 		if(i==1&&j==v.size()-2)
// 		{
// 			tmp=v[k]+burst(v,dp,i,k-1)+burst(v,dp,k+1,j);
// 		}
// 		else
// 		{
// 			tmp=v[i-1]*v[j+1]+burst(v,dp,i,k-1)+burst(v,dp,k+1,j);
// 		}
// 		ans=max(tmp,ans);
// 	} 

// 	return dp[i][j]=ans;

// }

// void solve()
// {

// 	int n;
// 	cin>>n; 
// 	vector<int>v(n+2,0);

// 	v[0]=v[n+1]=1;
// 	for(int i=1;i<=n;i++)
// 	{
// 		cin>>v[i];
// 	}

// 	vector<vector<int>>dp(n+4,vector<int>(n+4,-1));
// 	int ans=burst(v,dp,1,n);
// 	cout<<ans<<endl;




// }


// int main()
// {
// 	solve();
// }




//=============================================================

//Burst Ballon Optimally 2

// 4
// 3 1 5 8
// int n;


// int burst(vector<int>&v,vector<vector<int>>&dp,int i,int j)
// {
// 	if(i>j)
// 		return 0;

// 	if(i==j)
// 	{
// 		return v[i-1]*v[i+1];
// 	}

// 	if(dp[i][j]!=-1)
// 	{
// 		return dp[i][j];
// 	}

// 	int ans=INT_MIN,tmp;
// 	for(int k=i;k<=j;k++)
// 	{
// 		tmp=v[i-1]*v[k]*v[j+1]+burst(v,dp,i,k-1)+burst(v,dp,k+1,j);

// 		ans=max(ans,tmp);

// 	}
// 	return dp[i][j]=ans;
// }
// void solve()
// {
// 	cin>>n; 

// 	vector<int>v(n+2,0);

// 	v[0]=v[n+1]=1; 

// 	for(int i=1;i<=n;i++)
// 	{
// 		cin>>v[i];
// 	}


// 	vector<vector<int>>dp(n+4,vector<int>(n+4,-1));

// 	int ans=burst(v,dp,1,n);
// 	cout<<ans<<endl;
// }


// int main()
// {
// 	solve();
// }


//==========================================================================


// Chess Piece

// 9 
// 3 5 2 8


// 20 
// 2 3 7 9
// int n,r,c,s,k;

// void solve()
// {
// 	cin>>n>>r>>c>>s>>k; 
// 	vector<vector<int>>vis(n+4,vector<int>(n+4,0));
// 	vector<vector<int>>dis(n+4,vector<int>(n+4,INT_MAX));




// 	int dx[]={2,2,-2,-2,1,-1,1,-1};
// 	int dy[]={1,-1,1,-1,2,2,-2,-2};


// 	queue<pair<int,int>>q; 

// 	q.push({r,c});

// 	dis[r][c]=0;
// 	vis[r][c]=1;

// 	while(!q.empty())
// 	{
// 		pair<int,int>t=q.front();

// 		q.pop();


// 		int x=t.first;
// 		int y=t.second;

// 		for(int i=0;i<8;i++)
// 		{
// 			int nextX=x+dx[i];
// 			int nextY=y+dy[i];
// 			if(nextX>=1&&nextX<=n&&nextY>=1&&nextY<=n&&!vis[nextX][nextY])

// 			{
// 				vis[nextX][nextY]=1;
// 				dis[nextX][nextY]=min(dis[x][y]+1,dis[nextX][nextY]);
// 				q.push({nextX,nextY});

// 			}
// 		}

// 	}

// 	if(dis[s][k]==INT_MAX)
// 	{
// 		cout<<-1<<endl;
// 	}
// 	else
// 	{
// 		cout<<dis[s][k]<<endl;
// 	}


// }

// int main()
// {
// 	solve();
// }


//===============================================================

//convex hull


// 8
// 0 3
// 1 1
// 2 2
// 4 4
// 0 0
// 1 2
// 3 1
// 3 3
// int n;
// vector<pair<int,int>>v; 

// int triangleArea(pair<int,int>a,pair<int,int>b,pair<int,int>c)
// {

// 	double area=a.first*(b.second-c.second)+b.first*(c.second-a.second)+c.first*(a.second-b.second);

// 	if(area>0)
// 	{
// 		return 1;
// 	}
// 	else if(area<0)
// 	{
// 		return -1;
// 	}
// 	else
// 	{
// 		return 0;
// 	}
// }

// void convex_hull()
// {


// 	pair<int,int>  a=v[0];

// 	pair<int,int> b=v.back();

// 	vector<pair<int,int>>up,down;


// 	up.push_back(a); 
// 	down.push_back(a);


// 	for(int i=1;i<n;i++)
// 	{
// 		if(i==v.size()-1||triangleArea(a,v[i],b)==-1)
// 		{

// 			while(up.size()>=2&&triangleArea(up[up.size()-2],up[up.size()-1],v[i])!=-1)
// 			{
// 				up.pop_back();

// 			}

// 			up.push_back(v[i]);
// 		}
// 		if(i==v.size()-1||triangleArea(a,v[i],b)==1)
// 		{

// 			while(down.size()>=2&&triangleArea(down[down.size()-2],down[down.size()-1],v[i])!=1)
// 			{
// 				down.pop_back();

// 			}

// 			down.push_back(v[i]);
// 		}
// 	}

// 	vector<pair<int,int>>ans; 

// 	for(int i=0;i<up.size();i++)
// 	{
// 		ans.push_back(up[i]);
// 	}

// 	for(int i=down.size()-2;i>0;i--)
// 	{
// 		ans.push_back(down[i]);
// 	}

// 	for(auto x:ans)
// 	{
// 		cout<<x.first<<" "<<x.second<<endl;
// 	}

// }
// void solve()
// {


// 	cin>>n; 
	


// 	for(int i=0;i<n;i++)
// 	{
// 		int x,y;
// 		cin>>x>>y; 

// 		v.push_back({x,y});

// 	}

// 	sort(v.begin(),v.end());

// 	convex_hull();
// }

// int main()
// {
// 	solve();
// }


//====================================================================


//crowpot

// 2 1
// 58 5
// int pop_count(int mask)
// {
// 	int cnt=0;

// 	while(mask)
// 	{
// 		if(mask&1)
// 		{
// 			cnt++;
// 		}
// 		mask/=2; 
// 	}
// 	return cnt;
// }

// void solve()
// {
// 	int n,k; 
// 	cin>>n>>k; 

// 	vector<int>v(n);
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>v[i];
// 	}
// 	sort(v.begin(),v.end());
	
// 	long long ans=v[n-1]*k; 


// 	for(int mask=0;mask<(1<<n);mask++)
// 	{
// 		if(pop_count(mask)!=k)
// 			continue;

// 		long long cur=0; 
// 		int last=n; 


// 		for(int j=n-1;j>=0;j--)
// 		{
// 			if(mask&(1<<j))
// 			{
// 				cur+=v[j]*(last-j);
// 				last=j;
// 			}
// 		}
// 		ans=min(ans,cur);
// 	}

// 	cout<<ans<<endl;
// }



// int main()
// {
// 	solve();
// }

// 2 1
// 58 5

//====================================================

// Cycle detect in directed Graph

// 5 6

// 0 1
// 2 1
// 2 3
// 3 4
// 4 2
// 4 0 


// const int MAX=10005; 

// vector<int>adj[MAX];

// vector<int>tmp;
// int n,m; 
// int ans=INT_MAX;

// void bfs(int x,vector<int>&vis,vector<int>&par,vector<int>&dis)
// {
// 	vis[x]=1; 
// 	dis[x]=0; 


// 	queue<int>q; 
// 	q.push(x);

// 	while(!q.empty())
// 	{
// 		int t=q.front();
// 		q.pop();
// 		for(int i=0;i<adj[t].size();i++)
// 		{
// 			int nextT=adj[t][i];
// 			if(!vis[nextT])
// 			{
// 				vis[nextT]=1; 
// 				dis[nextT]=1+dis[t];
// 				par[nextT]=t; 
// 				q.push(nextT);
// 			}
// 		}
// 	}


// 	for(int i=1;i<=n;i++)
// 	{
// 		if(i==x)
// 			continue;


// 		for(int j=0;j<adj[i].size();j++)
// 		{
// 			if(adj[i][j]==x)
// 			{
// 				if(ans>1+dis[i]&&vis[i])
// 				{
// 					ans=1+dis[i]; 

// 					tmp.clear();
// 					tmp.push_back(x);

// 					for(int k=i;k!=x;k=par[k])
// 						tmp.push_back(k);

// 				}
// 			}
// 		}
// 	}
// }

// void solve()
// {
// 	cin>>n>>m; 

// 	for(int i=0;i<m;i++)
// 	{
// 		int x,y; 
// 		cin>>x>>y; 
// 		adj[x].push_back(y);
// 	}


// 	for(int i=1;i<n;i++)
// 	{
// 		vector<int>vis(n+1,0);
// 		vector<int>par(n+1,-1);
// 		vector<int>dis(n+1,INT_MAX);

// 		bfs(i,vis,par,dis);
// 	}

// 	sort(tmp.begin(),tmp.end());

// 	for(auto x:tmp)
// 		cout<<x<<" ";
// 		cout<<endl;  
// }

// int main()
// {
// 	solve();
// }

//===========================================================================================


// Doctor Probability


const int MAX=10005; 

vector<int>adj[MAX];

double ans[MAX];

double weight[MAX][MAX];
double now=1.0;

void dfs(int n,int k)
{
	if(k==0)
	{
		ans[n]+=now;

		return ;
	}

	for(auto &x:adj[n])
	{
		now*=weight[n][x]; 
		dfs(x,k-1);
		now/=weight[n][x];
	}
	return ;

}

void solve()
{
	int n,m,k; 
	cin>>n>>m>>k; 


	for(int i=0;i<=n;i++)
	{
		ans[i]=0; 

		adj[i].clear();

		for(int j=0;j<=m;j++)
		{
			weight[i][j]=0; 
		}
	}

	for(int i=0;i<m;i++)
	{
		int x,y; 
		double w; 
		cin>>x>>y>>w; 


		adj[x].push_back(y);

		weight[x][y]=w; 
	}


	dfs(1,k/10);
	double res=0; 
	int idx=-1; 



	for(int i=1;i<=n;i++)
	{
		if(res<ans[i])
		{
			idx=i; 
			res=ans[i];
		}
	}
	cout<<idx<<" "<<res<<endl;
}

int main()
{

	solve();
}