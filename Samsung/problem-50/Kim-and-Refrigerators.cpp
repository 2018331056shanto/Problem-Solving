/*
Mr. Kim has to deliver refrigerators to N customers. From the office, he is going to visit all the customers and then return to his home. Each location of the office, his home, and the customers is given in the form of integer coordinates [x, y],

The distance between two arbitrary locations (x1, y1) and (x2, y2) is computed by |x1-x2| + |y1-y2|, where |x| denotes the absolute value of x; for instance, |3|=|-3|=3. The locations of the office, his home, and the customers are all distinct. You should plan an optimal way to visit all the N customers and return to his among all the possibilities.

You are given the locations of the office, Mr. Kim’s home, and the customers; the number of the customers is in the range of 5 to 10. Write a program that, starting at the office, finds a (the) shortest path visiting all the customers and returning to his home. Your program only has to report the distance of a (the) shortest path.

Input Format

You are given 10 test cases. Each test case consists of two lines; the first line has N, the number of the customers, and the following line enumerates the locations of the office, Mr. Kim’s home, and the customers in sequence. Each location consists of the coordinates (x, y), which is represented by ‘x y’.

Input (20 lines in total. In the first test case, the locations of the office and the home are (0, 0) and (100, 100) respectively, and the locations of the customers are (70, 40), (30, 10), (10, 5), (90, 70), (50, 20).)

Constraints

4 < N < 11 Each location (x, y) is in a bounded grid, -1

Output Format

Output the 10 answers in 10 lines. Each line outputs the distance of a (the) shortest path. Each line looks like ‘#x answer’ where x is the index of a test case. ‘#x’ and ‘answer’ are separated by a space.

Sample Input 0

5
0 0 100 100 70 40 30 10 10 5 90 70 50 20
6
88 81 85 80 19 22 31 15 27 29 30 10 20 26 5 14
5
0 0 100 100 70 40 30 10 10 5 90 70 50 20
6
88 81 85 80 19 22 31 15 27 29 30 10 20 26 5 14
5
0 0 100 100 70 40 30 10 10 5 90 70 50 20
6
88 81 85 80 19 22 31 15 27 29 30 10 20 26 5 14
5
0 0 100 100 70 40 30 10 10 5 90 70 50 20
6
88 81 85 80 19 22 31 15 27 29 30 10 20 26 5 14
5
0 0 100 100 70 40 30 10 10 5 90 70 50 20
6
88 81 85 80 19 22 31 15 27 29 30 10 20 26 5 14


*/


#include<iostream>
#include<utility>
#include<vector>
#include<climits>
#include<algorithm>


using namespace std;

int x[20],y[20],n,ans;

void optimalPath(int j,vector<bool>&visited,int node,int value)
{
	if(n==node)
	{
		ans=min(ans,value+abs(x[j]-x[n+1])+abs(y[j]-y[n+1]));
	}

	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			visited[i]=true;
			optimalPath(i,visited,node+1,value+abs(x[j]-x[i])+abs(y[j]-y[i]));
			visited[i]=false;
		}
	}
}

void solve()
{
	ans=INT_MAX;
	cin>>n; 
	cin>>x[n+1]>>y[n+1]>>x[0]>>y[0];
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];
	}
	
	vector<bool>visited(n+2,false);

	optimalPath(0,visited,0,0);
	cout<<ans<<endl;
	
}

int main()
{
	int t=10; 
	for(int i=1;i<=t;i++)
	{
		cout<<"# "<<i<<" ";
		solve();
	}
	
}