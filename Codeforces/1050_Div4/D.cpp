#include<bits/stdc++.h>
using namespace std;


void solve(){

	long long n;
	cin>>n;
	std::vector<long long> v(n);
	long long ans=0;
	vector<long long>oddNums;

	long long odd=0;

	for(long long i=0;i<n;i++){
		cin>>v[i];

		if(v[i]%2){
			odd++;
			oddNums.push_back(v[i]);
		}else{
			ans+=v[i];
		}
	}

	if(odd==0){
		cout<<0<<endl;
	}else{

		
		sort(oddNums.begin(),oddNums.end(),greater<>());

		int k=(oddNums.size()+1)/2;

		for(int i=0;i<k;i++){
			ans+=oddNums[i];
		}
		cout<<ans<<endl;
		

	}


}

int main(){

	long long t;
	cin>>t; 


	while(t--){
		solve();
	}
}