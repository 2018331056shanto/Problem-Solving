#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n,time;
	cin>>n>>time;


	std::vector<pair<int,int>> v(n);

	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		v[i]={x,y};
	}
	int ans=0;

	pair<int,int>previous={0,0};
	for(int i=0;i<n;i++){

		int x=v[i].first;
		int y=v[i].second;

		if((x-previous.first)%2==0){

			if(y==previous.second){
				ans+=x-previous.first;
			}else{

				ans+=x-previous.first-1;
			}
		}else{

			if(y!=previous.second){
				ans+=x-previous.first;
			}else{

				ans+=x-previous.first-1;
			}
		}

		previous=v[i];
	}

	// cout<<previous.first<<endl;
	ans=max(ans,ans+time-previous.first);
	cout<<ans<<endl;



	// 0-0

	// 1-1

	// 2-0
	// 2-1
	// 3-0
	// 4-1
	// 5-0
	// 6-1
	// 7-1
	// 3-1

	// 3-0
	// 4-1
	// 5-0
	// 6-1
	// 7 -1

	// 0 -1




}

int main(){

	int t;
	cin>>t; 


	while(t--){
		solve();
	}
}