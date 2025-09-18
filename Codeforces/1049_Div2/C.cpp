#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin>>n; 

	std::vector<long long> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}


	long long ans=0;

	for(int i=0;i<n;i++){

		if(i%2){
			ans-=v[i];
		}else{

			ans+=v[i];
		}
	}


	long long initial=ans;


	if(n%2){
		ans+=n-1;
	}else{
		ans+=n-2;
	}


	long long minimumEven=LLONG_MAX/2;
	long long minimumOdd=LLONG_MAX/2;


	for(int i=0;i<n;i++){

		if(i%2){

			ans=max(initial+i+2*v[i]-minimumEven,ans);
			minimumOdd=min(minimumOdd,i-2*v[i]);
		}else{


			ans=max(initial+i-2*v[i]-minimumOdd,ans);
			minimumEven=min(miniumEven,i+2*v[i]);
		}
	}


	cout<<ans<<endl;

}

int main(){

	int t;
	cin>>t; 


	while(t--){
		solve();
	}
