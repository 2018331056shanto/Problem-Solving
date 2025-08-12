#include<bits/stdc++.h>
using namespace std;

int main(){


	int n,q;
	cin>>n>>q;

	std::vector<long long> v(n+1,0L);

	for(int i=1;i<=n;i++){

		cin>>v[i];
	}

	for(int i=1;i<=n;i++){

		v[i]=v[i-1]+v[i];
		// cout<<v[i]<<" ";

	}
	cout<<endl;

	for(int i=0;i<q;i++){
		int x,y;
		cin>>x>>y;

		cout<<v[y]-v[x-1]<<endl;


	}

}