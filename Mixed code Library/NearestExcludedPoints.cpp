#include<bits/stdc++.h>
using namespace std;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
    scanf("%d", &n);
    vector<pair<int, int>> v(n);
    for (auto &[x, y] : v) 
    	scanf("%d %d", &x, &y);
	set<pair<int,int>>st(v.begin(),v.end());	
	map<pair<int,int>,pair<int,int>>ans;
	queue<pair<int,int>>q;
	for(auto [x,y]:v)
	{
		for(int i=0;i<4;i++)
		{
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(st.count({nx,ny}))
			{
				continue;
			}
			ans[{x,y}]={nx,ny};
			q.push({x,y});
			break;
		}
	}
	
	while(!q.empty())
	{
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0;i<4;i++)
		{
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(!st.count({nx,ny})||ans.count({nx,ny}))
				continue;
			ans[{nx,ny}]=ans[{x,y}];
			q.push({nx,ny});
		}
	}
	for(auto [x,y]:v)
	{
		auto it=ans[{x,y}];
		cout<<it.first<<" "<<it.second<<endl;
	}
}