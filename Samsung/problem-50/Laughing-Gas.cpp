/*
You are busy to promote a newly released film in a movie theatre .
 the title is 'Biochemical Laughing Bomb' which is about terror. 
 Guerillas drop a biochemical laughing bomb in the middle of a city.
 once exposed, you have to laugh all your life.
  The bomb will contaminate four people around it during t second,
   and another four around each of them during another one second.
    However, you won't be contaminated if you are not in the adjacent 
    four directions. as the below shows the location of the bomb
     and affected people , and shows contamination process 
     in seconds and you can figure out that the whole city is
      contaminated in 8 seconds. 
      In order to protect the city from the epidemic, 
      create a program that figures out when the city will be 
      contaminated by the bomb for the last.

Input
Several test cases can be included in the inputs. T,
 the number of cases is given in the first row of the inputs.
  After that, the test cases as many as T (T ≤ 30) are given in a row.
   The row and column of the city,
    N and M are given by being separated with a 
    blank on the first row of each test case. (1 ≤ N, M ≤ 100)
     The status within city is given by being separated with a blank 
     from the second row to N number rows.
      1 means people exist and 0 means people do not exist. 
      The coordinate of the row and column on which the bomb
       fall is given by being separated with a blank on the last row.

Output
For each test case, you should print "Case #T" in the first line where T means the case number.
 For each test case, you should output how long does it take to contaminate al people on the first row of each test case

*/

#include<iostream>
#include<queue>
#include<climits>
#include<vector>
#include<utility>

using namespace std;

//need modification


void solve()
{
	int n,m; 
	cin>>n>>m; 

	vector<vector<int>>arr(n+4,vector<int>(m+4,0));

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>arr[i][j];
		}
	}

	int px,py; 
	cin>>px>>py;

	vector<vector<int>>vis(n+4,vector<int>(m+4,0));
	vector<vector<int>>vis(n+4,vector<int>(m+4,0));

	int dx[]={1,-1,0,0};
	int dy[]={0,0,1,-1};


	queue<pair<int,int>>q; 
	vis[px][py]=1;
	dis[px][py]=1; 


	q.push({px,py});

	while(!q.empty())
	{
		pair<int,int>t=q.front();
		q.pop();

		for(int i=0;i<4;i++)
		{
			int x=t.first+dx[i];
			int y=t.second+dy[i];

			if(x>=1&&x<=n&&y>=1&&y<=m)
			{
				dis[x][y]=1+dis[t.first][t.second]+1;

				vis[x][y]=1; 
				q.push({x,y});
			}
		}


	}

	int ans=-1; 

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			ans=max(ans,dis[i][j]);
		}
	}

	cout<<ans<<endl;

}

int main()
{
	int t;
	cin>>t; 
	while(t--)
	solve();
}

