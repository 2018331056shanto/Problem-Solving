#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		std::vector<std::vector<pair<int,int>>> v(n);
		for(int i=0;i<m;i++)
		{
			
			int x,y;
			string s;
			cin>>x>>y>>s;
			if(s=="imposter")
			{
				v[x-1].push_back({1,y-1});
				v[y-1].push_back({1,x-1});
			}
			else
			{
				v[x-1].push_back({0,y-1});
				v[y-1].push_back({0,x-1});
			}
		}
		//cout<<"ff"<<endl;
		 bool ok=true;
		 long long ans=0;
		 vector<int>p(n,-1);
		 for(int l=0;l<n;l++)
		 {
		 	if(p[l]==-1)
		 	{
		 		p[l]=0;
		 		vector<int>cnt(2,0);
		 		queue<int>q;
		 		q.push(l);
		 		while(!q.empty())
		 		{
		 			int f=q.front();
		 			q.pop();
		 			cnt[p[f]]++;
		 			for(auto x:v[f])
		 			{
		 				 int ff=x.first;
		 				 int ss=x.second;
		 				 if(p[ss]==-1)
		 				 {
		 				 	p[ss]=p[f]^ff;
		 				 	q.push(ss);
		 				 }
		 				 else if(p[ss]!=(p[f]^ff))
		 				 {
		 				 	ok=false;
		 				 }
		 			}
		 		}
		 		ans+=max(cnt[0],cnt[1]);
		 	}
		 	
		 }
		 if(!ok)
		 {
		 	cout<<-1<<endl;
		 }
		 else
		 {
		 	cout<<ans<<endl;
		 }

	}
}	