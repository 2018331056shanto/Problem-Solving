#include<bits/stdc++.h>

using namespace std;

void solve(){
	
	double T,l,t;
	cin>>T>>l>>t;

	double b=l*T*T;


	double c=(-1)*l*t*T*T;

	double d=sqrt((b*b)-4*c);

	d-=b;


	d/=2;
	cout<<(int)d<<endl;



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
