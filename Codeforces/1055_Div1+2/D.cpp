#include<bits/stdc++.h>
using namespace std;

int bitLenght(long long x){

	return 64-__builtin_clzll(x);
}

void solve(){


	int n,q;
	cin>>n>>q;
	std::vector<long long> v(n+1);
	vector<int>bls(n+1),fight(n+1);

	for(int i=1;i<=n;i++){
		cin>>v[i];

		bls[i]=bitLenght(v[i])-1;

		if(v[i]&(v[i]-1)){

			if((v[i]-1)&(v[i]-2)){

				bls[i]++;
			}else{
				fight[i]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		bls[i]+=bls[i-1];
		fight[i]+=fight[i-1];
	}

	while(q--){

		int l,r;
		cin>>l>>r;

		int ans=bls[r]-bls[l-1];
		int f=fight[r]-fight[l-1];

		ans+=f/2;

		cout<<ans<<endl;


	}

}
	




int main(){


	int t;
	cin>>t;
	while(t--){
		solve();
	}
}








