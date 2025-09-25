#include<bits/stdc++.h>
using namespace std;

void solve(){


	int n,m;
	cin>>n>>m;


	unordered_map<int,pair<int,int>>mp;

	for(int i=0;i<n;i++){

		int x;
		cin>>x;
		for(int j=0;j<x;j++){
			int y;
			cin>>y;
			if(mp.find(y)==mp.end()){

				mp[y]={1,i};
			}else{

				auto temp=mp[y];

				mp[y]={temp.first+1,i};
			}
		}
	}

	if(m==1){
		cout<<"YES"<<endl;
		return;
	}




	if(mp.size()!=m){
		// cout<<mp.size()<<" "<<<<endl;
		cout<<"NO"<<endl;
		return;
	}

	set<int>st;
	for(auto [x,y]:mp){

		if(y.first==1){
			
			st.insert(y.second);
		}
	}


	if(n-st.size()<=1){
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
}


int main(){


	int t;
	cin>>t;
	while(t--){

		solve();

	}
}