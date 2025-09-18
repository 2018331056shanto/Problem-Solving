#include<bits/stdc++.h>
using namespace std;


void solve(){

	long long n,k;
	cin>>n>>k;

	vector<long long>v(n);
	unordered_map<long long,long long>mp;
	for(long long i=0;i<n;i++){
		cin>>v[i];
		mp[v[i]]++;
	}

	for(auto [key,value]:mp){
		if(value%k!=0){
			cout<<0<<endl;
			return ;
		}else{

			mp[key]/=k;
		}
	}

	long long ans=0;

	long long i=0;
	long long j=0;
	unordered_map<long long,long long>used;

	while(j<n){

		used[v[j]]++;

		while(used[v[j]]>mp[v[j]]){

			used[v[i]]--;
			i++;

		}
		
		ans+=(j-i+1);
		// cout<<(j-i+1)<<" "<<ans<<endl;
		j++;
	}

	cout<<ans<<endl;

}

int main(){

	long long t;
	cin>>t; 


	while(t--){
		solve();
	}
}