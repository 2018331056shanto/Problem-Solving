/*
Given random points in a 2-D plane, construct a convex polygon with minimum area of covering and 
which encompasses all the given points.

8
0 3
1 1
2 2
4 4
0 0
1 2
3 1
3 3

0 0
0 3
4 4
3 1

*/

#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;


int triangleArea(pair<int,int>a,pair<int,int>b,pair<int,int>c)
{
	double d=a.first*(b.second-c.second)+b.first*(c.second-a.second)+c.first*(a.second-b.second);

	if(d<0)
	{
		return -1;
	}
	else if(d>0)
	{
		return 1;
	}
	else
		return 0;
}

void convex_hull(vector<pair<int,int>>&v)
{
	pair<int,int>a=v[0];
	pair<int,int>b=v.back();

	vector<pair<int,int>>up,down;

	up.push_back(a);
	down.push_back(a);


	for(int i=1;i<v.size();i++)
	{
		if(i==v.size()-1||triangleArea(a,v[i],b)==-1)
		{

			while(up.size()>=2&&triangleArea(up[up.size()-2],up[up.size()-1],v[i])!=-1)
			{
				up.pop_back();
			}
			up.push_back(v[i]);
		}


		if(i==v.size()-1||triangleArea(a,v[i],b)==1)
		{
			while(down.size()>=2&&triangleArea(down[down.size()-2],down[down.size()-1],v[i])!=1)
			{
				down.pop_back();
			}
			down.push_back(v[i]);

		}
	}
	v.clear();

	for(int i=0;i<up.size();i++)
	{
		v.push_back(up[i]);
	}
	for(int i=down.size()-2;i>0;i--)
	{
		v.push_back(down[i]);
	}

	for(auto x:v)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
}

void solve()
{
	int n;
	cin>>n;

	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;

		v.push_back({x,y});
	}
	sort(v.begin(),v.end());


	convex_hull(v);
}

int main()
{
	solve();
}