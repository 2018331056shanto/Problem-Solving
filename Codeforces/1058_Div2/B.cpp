#include<bits/stdc++.h>
using namespace std;

void solve(){

	long long n;
	cin>>n; 
	std::vector<long long> v(n);

	for(long long i=0;i<n;i++){
		cin>>v[i];
	}
	vector<long long>ans;
	ans.push_back(1);
	long long last=1;
	for(long long i=1;i<n;i++){

		long long diff=v[i]-v[i-1];

		if((ans.size()+1)==diff){
			ans.push_back(++last);

		}else{
			
			long long index=(v[i-1]+ans.size()+1)-v[i];
			// cout<<index<<" "<<v[i]<<endl;
			ans.push_back(ans[index-1]);

		}
	}
	for(auto x:ans){
		cout<<x<<" ";
	}
	cout<<endl;

}

int main(){


	long long t;
	cin>>t; 
	while(t--){

		solve();
	}
}




