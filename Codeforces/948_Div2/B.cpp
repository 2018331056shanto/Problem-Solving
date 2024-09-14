#include<bits/stdc++.h>
using namespace std;


void dfs(vector<int>&v,int t,int start,int sum,vector<int>&tmp,vector<vector<int>>&ans)
{
	if(ans.size()!=0)
		return;	

	if(start==v.size())
	{

		if(sum==t)
		{
			ans.push_back(tmp);
		}
		
		return ;
	}
	//skip

	dfs(v,t,start+1,sum,tmp,ans);

	//add as positive

	

	if(tmp.size()>0)
	{
		int z=abs(tmp[tmp.size()-1]);

		if(z*4<=v[start])
		{
			tmp.push_back(v[start]);

			sum+=v[start];
			
			dfs(v,t,start+1,sum,tmp,ans);

			sum-=v[start];

			tmp.pop_back();

		}

	}
	else
	{
		sum+=v[start];
		tmp.push_back(v[start]);

		dfs(v,t,start+1,sum,tmp,ans);

			sum-=v[start];

			tmp.pop_back();
	}
	

	//add as negative

	// sum-=v[start];
	// tmp.push_back(-1*v[start]);
	// dfs(v,t,start+1,sum,tmp,ans);
	// sum+=v[start];
	// tmp.pop_back();

	if(tmp.size()>0)
	{
		int z=abs(tmp[tmp.size()-1]);

		if(z*4<=v[start])
		{
			tmp.push_back(-1*v[start]);

			sum-=v[start];
			
			dfs(v,t,start+1,sum,tmp,ans);

			sum+=v[start];

			tmp.pop_back();

		}

	}
	else

	{
		sum-=v[start];
		tmp.push_back(-1*v[start]);
		
		dfs(v,t,start+1,sum,tmp,ans);

			sum+=v[start];

			tmp.pop_back();
	}
	
}


void solve(){
	

	int x;
	cin>>x; 


	std::vector<int> v;

	int addNum=1;
	while(addNum<=x)
	{
		v.push_back(addNum);
		addNum*=2;
	}
	v.push_back(addNum);
	int target=x;

	vector<vector<int>>ans;

	vector<int>tmp;

	dfs(v,target,0,0,tmp,ans);
	vector<pair<int,int>>store;
	for(auto z:ans){
		for(auto y:z)
			{
				int cnt=0;
				int ss=abs(y);
				while(ss>0)
				{
					cnt++;
					ss/=2;
				}

				store.push_back({cnt-1,y});
			}
		break;
		// cout<<endl;
	}

	vector<int>sss(store[store.size()-1].first+1,0);

	for(auto zz:store)
	{
		if(zz.second<0)
			sss[zz.first]=-1;
		else
			sss[zz.first]=1;
	}


	cout<<sss.size()<<endl;
	for(auto yy:sss)
		cout<<yy<<" ";

	cout<<endl;



}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
