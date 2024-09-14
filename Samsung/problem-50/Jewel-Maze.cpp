/*
There is a maze that has one entrance and one exit. Jewels are placed in passages of the maze. 
You want to pick up the jewels after getting into the maze through the entrance and before getting 
out of it through the exit. You want to get as many jewels as possible, but you don’t want to take 
the same passage you used once.

When locations of a maze and jewels are given, find out the greatest number of jewels you can get 
without taking the same passage twice, and the path taken in this case.

Input
There can be more than one test case in the input file. The first line has T, the number of test cases.
Then the totally T test cases are provided in the following lines (T ≤ 10 ).

In each test case, In the first line, the size of the maze N (1 ≤ N ≤ 10) is given. 
The maze is N×N square-shaped. From the second line through N lines, information of the maze is given.
“0” means a passage, “1” means a wall, and “2” means a location of a jewel. The entrance is located 
on the upper-most left passage and the exit is located on the lower-most right passage. 
There is no case where the path from the entrance to the exit doesn’t exist.

Output
From the first line through N lines, mark the path with 3 and output it. In N+1 line, output the 
greatest number of jewels that can be picked up. Each test case must be output separately as a empty.

*/


#include<iostream>
#include <climits>
#include<utility>
#include<algorithm>
#include<vector>

using namespace std;

int n;

const int MAX=10005; 
int arr[MAX][MAX],vis[MAX][MAX],path[MAX][MAX],ans[MAX][MAX];

int maxJewel;

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};


void savePath()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ans[i][j]=path[i][j];
		}
	}
}
void dfs(int i,int j,int total)
{
	path[i][j]=3; 
	vis[i][j]=1;

	if(i==0&&j==0&&arr[i][j]==2)
	{
		total++;
	}

	if(i==n-1&&j==n-1)
	{
		if(total>maxJewel)
		{
			maxJewel=total;
			savePath();
		}
		vis[i][j]=0; 
		return;
	}

	if(j+1<=n-1)
	{
		if(!vis[i][j+1]&arr[i][j+1]!=1)
		{
			if(arr[i][j+1]==2)
				dfs(i,j+1,total+1);
			else
				dfs(i,j+1,total);

			path[i][j+1]=arr[i][j+1];	
		}
	}
	if(j-1>=0)
	{
		if(!vis[i][j-1]&arr[i][j-1]!=1)
		{
			if(arr[i][j-1]==2)
				dfs(i,j-1,total+1);
			else
				dfs(i,j-1,total);

			path[i][j-1]=arr[i][j-1];	
		}
	}
	if(i+1<=n-1)
	{
		if(!vis[i+1][j]&arr[i+1][j]!=1)
		{
			if(arr[i+1][j]==2)
				dfs(i+1,j,total+1);
			else
				dfs(i+1,j,total);

			path[i+1][j]=arr[i+1][j];	
		}
	}

	if(i-1>=0)
	{
		if(!vis[i-1][j]&arr[i-1][j]!=1)
		{
			if(arr[i-1][j]==2)
				dfs(i-1,j,total+1);
			else
				dfs(i-1,j,total);

			path[i-1][j]=arr[i-1][j];	
		}
	}
	vis[i][j]=0;
}

void solve()
{
	cin>>n;

	maxJewel=-1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
			vis[i][j]=0;
			path[i][j]=arr[i][j];
		}
	} 


	dfs(0,0,0);


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<maxJewel<<endl;
}


int main()
{
	solve();
}