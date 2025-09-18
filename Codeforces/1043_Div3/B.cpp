#include<bits/stdc++.h>
using namespace std;

long long intPow(long long base, int exp) {
    long long result = 1;
    while (exp--) result *= base;
    return result;
}

int main(){


	int t;
	cin>>t;
	while(t--){

		long long n;
		cin>>n; 

		vector<long long>ans;
		long long r=1;

		for(int i=1;i<=18;i++){

			r*=10;
			if(n%(r+1)==0){
				ans.push_back(n/(r+1));
			}
		}
		sort(ans.begin(),ans.end());
		cout<<ans.size()<<endl;
		if(ans.size()==0){
			continue;
		}

		for(auto x:ans){

			cout<<x<<" ";
		}
		cout<<endl;

	}
}