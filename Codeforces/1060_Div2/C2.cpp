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


	vector<int>order(n);
	iota(order.begin(),order.end(),0);

	sort(order.begin(),order.end(),[&](int x,int y)-> bool{

		return b[x]<b[y];
	});


	int ans=b[order[0]]+b[order[1]];

	unordered_map<int,int>cnt;

	for(int i=0;i<n;i++){

		for(int x:primeDivisor[a[i]]){
			if(cnt[x]>0){

				ans=0;
			}
			cnt[x]++;
		}

	}

	for(int i=0;i<n;i++){

		for(int x:primeDivisor[a[i]]){

			cnt[x]--;
		}

		for(int i=0;i<n;i++){
			for(int x:primeDivisor[a[i]+1]){
				if(cnt[x]>0){
					ans=min(ans,b[i]);
				}
			}
		}

		for(int x:primeDivisor[a[i]]){
			cnt[x]++;
		}
	}

	int idx=order[0];

	vector<int>check;

	for(int i=0;i<n;i++){

		if(i==idx){
			continue;
		}

		for(int x:primeDivisor[a[i]]){

			check.push_back(x);
		}
	}

	for(int x:check){

		int times=x-(a[idx]%x);

		if(times==0){
			times=0;
		}

		ans=min(1LL*ans,1LL*times*b[idx]);
	}

	cout<<ans<<endl;


}


int main(){

ios::sync_with_stdio(false);
    cin.tie(0);
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
