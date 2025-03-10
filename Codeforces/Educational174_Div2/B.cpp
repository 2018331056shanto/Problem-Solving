#include<bits/stdc++.h>

using namespace std;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void solve(){
	
	int n,m;
	cin>>n>>m;


	std::vector<vector<int>> v(n,vector<int>(m));

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{

			cin>>v[i][j];
		}
	}

	unordered_map<int,int>stranger,nonStranger;


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int curVal=v[i][j];
			bool flag=false;
			for(int k=0;k<4;k++)
			{
				int x=i+dx[k];
				int y=j+dy[k];


				if(x>=0&&x<n&&y>=0&&y<m)
				{
					if(v[x][y]==curVal)
					{
							
						nonStranger[curVal]++;
						flag=true;
						break;
					}
				}

			}
			if(!flag)
			{
				stranger[curVal]++;
			}
			
		}
	}

	// int ans=stranger.size();
	vector<pair<int,int>>nonStrangerSorted,strangerSorted;
	int cumulativeSumNonStranger=0;
	int cumulativeSumStranger=0;
	for(auto [x,y]:nonStranger)
	{

		cumulativeSumNonStranger+=y;
		nonStrangerSorted.push_back({y,x});
	}

	for(auto [x,y]:stranger)
	{

		cumulativeSumStranger+=y;
		strangerSorted.push_back({y,x});
	}
	sort(nonStrangerSorted.begin(),nonStrangerSorted.end(),greater<>());
	sort(strangerSorted.begin(),strangerSorted.end(),greater<>());

	int ans1=cumulativeSumNonStranger+(stranger.size()!=0?stranger.size()-1:0);

	int ans=stranger.size()+cumulativeSumNonStranger;

	int mxNonStrangerDeduct=0;
	int mxStrangerDeduct=0;
	for(auto[x,y]:stranger)
	{
		if(nonStranger.count(x))
		{
			mxNonStrangerDeduct=max(mxNonStrangerDeduct,nonStranger[x]);
		}
	}
	ans1-=mxNonStrangerDeduct;

	for(auto [x,y]:nonStranger)
	{
		if(stranger.count(x))
		{
			mxStrangerDeduct=max(mxStrangerDeduct,1+y);
		}
		mxStrangerDeduct=max(mxStrangerDeduct,y);
	}

	ans-=mxStrangerDeduct;

	cout<<min(ans,ans1)<<endl;

	// ans+=(nonStrangerSorted.size()!=0?cumulativeSumNonStranger-nonStrangerSorted[0].first:0);


	// if(nonStrangerSorted.size()!=0)
	// {
	// 	if(stranger.count(nonStrangerSorted[0].second))
	// 	{
	// 		ans-=stranger[nonStrangerSorted[0].second];
	// 	}
	// }
	// cout<<((stranger.size()==1&&nonStrangerSorted.size()==0)?0:ans)<<endl;

	// cout<<ans1<<endl;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t; 

	while(t--){

		solve();
	}
}



// 1 2 3 4
// 2 2 3 4
