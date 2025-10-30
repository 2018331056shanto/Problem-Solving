#include<bits/stdc++.h>
using namespace std; 
const int N = 2e5 + 10;


vector<vector<int>>primeDivisor(N);

void calulatePrimeDivisor(){
	for(int i=2;i<N;i++){

		if(primeDivisor[i].empty()){


			for(int j=i;j<N;j+=i){

				primeDivisor[j].push_back(i);
			}
		}
	}
}

void solve(){

	int n;
	cin>>n; 

	vector<int>a(n),b(n);

	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}

	for(int i=0;i<n;i++){
		cin>>b[i];
	}


	unordered_map<int,int>mp;
	int ans=2;

	for(int i=0;i<n;i++){

		for(auto x:primeDivisor[a[i]]){


			if(mp[x]>0){
				ans=0;
			}
			mp[x]++;
		}
	}

	for(int i=0;i<n;i++){

		for(auto x:primeDivisor[a[i]]){

			mp[x]--;
		}

		for(auto x:primeDivisor[a[i]+1]){

			if(mp[x]>0){
				ans=min(ans,1);
			}
		}

		for(auto x:primeDivisor[a[i]]){

			mp[x]++;
		}
	}




	cout<<ans<<endl;

}


int main(){

	calulatePrimeDivisor();
	int t;
	cin>>t; 
	while(t--){

		solve();
	}
}


// 1 2 3 4 5 6 7

// 1 2 1 4 3

// 2+2

//max value 2
