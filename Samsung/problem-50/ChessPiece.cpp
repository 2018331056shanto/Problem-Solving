/*
There is a mobile piece and a stationary piece on the N×M chessboard. 
The available moves of the mobile piece are the same as set out in the image below. 
You need to capture the stationary piece by moving the mobile piece with the minimum amount of moves.

Write a program to find out the minimum number moves to catch a piece. 

[Input]
Several test cases can be included in the inputs. T, the number of cases is given in the first row of the
inputs. After that, the test cases as many as T (T ≤ 20) are given in a row. 
N, the numbers of the rows and M, the number of columns of the chessboard are given in the first row of
each test case. 
R & C is the location information of the attacking piece and S & K is the location of the defending pieces 
and are given in the row at the second line. However, the location of the uppermost end of the left end 
is (1, 1)

[Output]
For each test case, you should print "Case #T" in the first line where T means the case number.

For each test case, you should output the minimum number of movements to catch a defending piece at the 
first line of each test case. If not moveable, output equals ‘-1’. 

[I/O Example]

Input 
2
9 9
3 5 2 8
20 20
2 3 7 9

Output
Case #1
2
Case #2
5 
*/


#include<iostream>
#include<climits>
#include<queue>

using namespace std;


void solve()
{
	int n,m,r,c,s,k;
	cin>>n>>m>>r>>c>>s>>k;

	vector<vector<int>>vis(n+4,vector<int>(m+4,0));

	vector<vector<int>>dis(n+4,vector<int>(m+4,INT_MAX));

	int dx[]={2,2,-2,-2,1,-1,1,-1};
	int dy[]={1,-1,1,-1,2,2,-2,-2};


	queue<pair<int,int>>q;

	vis[r][c]=1;
	dis[r][c]=0;

	q.push({r,c});

	while(!q.empty())
	{
		pair<int,int>tmp=q.front();
		q.pop();

		for(int i=0;i<8;i++)
		{
			int x=tmp.first+dx[i];
			int y=tmp.second+dy[i];

			if(x>=1&&x<=n&&y>=1&&y<=n&&!vis[x][y])
			{
				dis[x][y]=min(dis[x][y],dis[tmp.first][tmp.second]+1);
				q.push({x,y});
				vis[x][y]=1;
			}
		}
	}

	if(dis[s][k]==INT_MAX)
	{
		cout<<-1<<endl;
	}
	else
		cout<<dis[s][k]<<endl;

}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}