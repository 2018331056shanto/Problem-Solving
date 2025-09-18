#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin>>n;
	std::map<int, std::vector<int> > mp;

	for(int i=0;i<n;i++){
		int x;
		cin>>x;

		mp[x].push_back(i);

	}

	for(auto[x,y]:mp){

		if(y.size()%x!=0)
		{
			cout<<-1<<endl;
			return;
		}
	}

	vector<int>ans(n);

	int elementToStart=1;

	for(auto[x,y]:mp){

		int initial=0;

		while(initial<y.size()){

			for(int i=initial;i<initial+x;i++){
				ans[y[i]]=elementToStart;
			}
			elementToStart++;
			initial+=x;

		}
	}

	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
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