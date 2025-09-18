#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin>>n;
	string s;
	cin>>s; 

	int cnt0=0;
	for(int i=0;i<n;i++){

		if(s[i]=='0'){

			cnt0++;
		}
	}
	// cout<<"cnt : "<<cnt0<<endl;

	int ans=0;
	for(int i=0;i<n;i++){

		if(cnt0>0&&s[i]!='0'){
			ans++;
			cnt0--;
		}else{
			cnt0--;
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
}