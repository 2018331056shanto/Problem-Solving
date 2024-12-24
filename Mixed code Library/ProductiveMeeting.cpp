#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		priority_queue<pair<int,int>> pq;
		vector<pair<int,int>> ans;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(x)
			pq.push({x,i});
		}
		while(pq.size()>=2){
			pair<int,int> x=pq.top();
			pq.pop();
			pair<int,int> y=pq.top();
			pq.pop();
			ans.push_back({x.second,y.second});
			x.first--;
			y.first--;
			if(x.first) pq.push(x);
			if(y.first) pq.push(y);

		}
		cout<<ans.size()<<endl;
		for(auto &cv:ans) cout<<cv.first<<' '<<cv.second<<endl;
	} 
}	