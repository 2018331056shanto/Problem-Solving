#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin>>n;

	unordered_map<int,int>mp;
	std::vector<int> v;
	for(int i=0;i<n;i++){

		int x;
		cin>>x;
		mp[x]++;
		v.push_back(x);
	}

	for(int i=0;i<=101;i++){

		if(!mp.count(i)){
			cout<<i<<endl;
			return;
		}
	}



}



int main(){


	int t ;
	cin>>t;
	while(t--){
		solve();
	}
}