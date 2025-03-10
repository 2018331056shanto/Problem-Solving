#include<bits/stdc++.h>

using namespace std;

void solve(){
	
	int a,b,c,d;

	cin>>a>>b>>c>>d;
	int r=(b-d)/(a-c);

	int v=b-a*r;

	cout<<r<<" "<<v<<endl;

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
