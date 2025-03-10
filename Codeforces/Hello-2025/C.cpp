#include<bits/stdc++.h>

using namespace std;

void solve(){
	

	int l,r;
	cin>>l>>r;

	int k=31-__builtin_clz(l^r);

	int a=l|((1<<k)-1),b=a+1,c=a==l?r:l;

	cout<<a<<" "<<b<<" "<<c<<endl;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t; 

	while(t--){

		solve();
	}
}
