#include<bits/stdc++.h>
using namespace std; 


void solve(){


	int n;
	cin>>n; 

	std::vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	vector<int>prefix(n,0);
	prefix[0]=v[0];
	for(int i=1;i<n;i++){

		prefix[i]=max(v[i],prefix[i-1]);
	}

	
	long long ans=0;
	for(int i=0;i<n;i+=2){

		int dif=-1;

		if(i>0){

			dif=max(dif,v[i]-prefix[i-1]);
		}
		if(i<n-1){
			dif=max(dif,v[i]-prefix[i+1]);
		}

		ans+=dif+1;
	}
	cout<<ans<<endl;





}


int main(){

	int t;
	cin>>t; 
	while(t--){

		solve();
	}
}


// 1 2 3 4 5 6 7

// 1 2 1 4 3

// 2+2