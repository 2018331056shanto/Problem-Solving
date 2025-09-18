#include<bits/stdc++.h>
using namespace std;


void solve(){


	int n; 
	cin>>n; 
	vector<vector<int>>v(n);

	vector<int>l(n),r(n);
	long long ans=0;

	for(int i=0;i<n;i++){

		cin>>l[i]>>r[i];
		ans+=r[i]-l[i];

		v[i]={l[i]+r[i],l[i],r[i]};
	}

	sort(v.begin(),v.end(),greater<>());

	for(int i=0;i<n/2;i++){
		ans+=v[i][2];
	}

	for(int i=n/2;i<n/2+n/2;i++){
		ans-=v[i][1];
	}

	if(n%2==0){
		cout<<ans<<endl;
		return;
	}
	long long val=ans;

	for(int i=n-2;i>=n/2;i--){
		val-=v[i+1][1];
		val+=v[i][1];
		ans=max(ans,val);
	}

	for(int i=n/2-1;i>=0;i--){
		val+=v[i+1][2];
		val-=v[i][2];
		ans=max(ans,val);
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