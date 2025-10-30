#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(vector<int>&v){


	int i=0;
	int j=v.size()-1;

	while(i<j){

		if(v[i]!=v[j]){

			return false;
		}
		i++;
		j--;
	}

	if(v.size()%2){

		if(v[v.size()/2]){
			return false;
		}
	}
	return true;
}


void solve(){

	int n;
	cin>>n; 
	vector<int>v;

	while(n>0){

		v.push_back(n&1);
		n>>=1;
	}

	for(int i=0;i<=30;i++){

		if(checkPalindrome(v)){

			cout<<"YES"<<endl;
			return;
		}
		v.push_back(0);
	}
	cout<<"NO"<<endl;

	

}


int main(){

	int t;
	cin>>t; 

	while(t--){

		solve();
	}

}