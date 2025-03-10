#include<bits/stdc++.h>

using namespace std;

void solve(){
	
	int n;
	cin>>n; 
	std::vector<int> v(n-2);

	for(int i=0;i<n-2;i++)
	{
		cin>>v[i];
	}


	for(int i=1;i<n-2-1;i++)
	{
		if((v[i-1]==1&&v[i]==0&&v[i+1]==1))
		{
			cout<<"NO"<<endl;
			return;
		}
	}

	cout<<"YES"<<endl;

}
// 2 2 2 3 3 

// 2 2 3 3 3 3
// 0  0 1 1 

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t; 

	while(t--){

		solve();
	}
}
