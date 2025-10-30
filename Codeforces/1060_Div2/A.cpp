#include<bits/stdc++.h>
using namespace std; 


void solve(){

	int n,k;
	cin>>n>>k;

	string  s;
	cin>>s; 

	std::vector<int> v;
	v.push_back(-1000);
	for(int i=0;i<n;i++){

		if(s[i]=='1'){
			v.push_back(i);
		}
	}

	if(v.size()==0){
		cout<<0<<endl;
		return;
	}
	


	v.pop_back();
	
	int ans=0;

	for(int i=n-1;i>=0;i--){

		if(s[i]=='1'){

			int x=v.back();
		
			v.pop_back();


			if(x>=(i-(k-1))){
				

			}else{
				ans++;
			}


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