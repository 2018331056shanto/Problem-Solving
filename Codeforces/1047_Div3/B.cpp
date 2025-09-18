#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin>>n;
	std::vector<int> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	int total=n+1; 

	for(int i=0;i<n;i++){

		cout<<total-v[i]<<" ";
	}
	cout<<endl;


}

int main(){

	int t;
	cin>>t; 


	while(t--){
		solve();
	}
}