/*
/*
There is an island surrounded by oil mines. You will be given n companies and m oil mines having values.
You have to distribute the mines to "n" companies in fair manner. Remember the companies can have oil 
mines adjacent to each other and not in between of each others.After distributing them compute the 
difference of oil mines from the company getting highest and company getting lowest. This number 
should be minimum.(then only the distribution can be termed as fair).

Input 
2 
2 4 
6 13 10 2 
2 4 
6 10 13 2 

output 
5 
1
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>


using namespace std;

int n,m,ans;

void func(int i,int minVal,int maxVal,int sum,int st,vector<int>&vis,vector<int>&mines)
{
	if(vis[i])
	{
		minVal=min(minVal,sum);
		maxVal=max(maxVal,sum);

		if(st==n-1)
		{
			ans=min(ans,maxVal- minVal);
		}
		return;
	}

	vis[i]=1; 

	int j=(i+1)%m; 

	func(j,minVal,maxVal,sum+mines[i],st,vis,mines);
	int n_minVal=min(sum,minVal);
	int n_maxVal=max(sum, maxVal);
	func(j,n_minVal,n_maxVal,mines[i],st+1,vis,mines);
	vis[i]=0;
}

void solve()
{
	cin>>n>>m; 


	vector<int>mines(m);

	for(int i=0;i<m;i++)
	{
		cin>>mines[i];
	}

	ans=INT_MAX;

	vector<int>vis(m,0);

	for(int i=0;i<m;i++)
	{
		func(i,INT_MAX,INT_MIN,0,0,vis,mines);
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