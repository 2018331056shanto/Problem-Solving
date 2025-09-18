#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin>>n; 

	vector<pair<int,int>>odd,even;
	std::vector<int> v(n);



	for(int i=0;i<n;i++){

		cin>>v[i];

		if(i%2==0){
			odd.push_back({v[i],i});
		}else{
			even.push_back({v[i],i});
		}


	}
	if(n==1){
		cout<<v[0]<<endl;
		return;
	}

	sort(odd.begin(),odd.end(),greater<>());
	sort(even.begin(),even.end(),greater<>());
	pair<int,int>swapableEven,swapableOdd;
	pair<int,int>evenFirst=even[0];

	int inititalCost=0;
	if(n%2){
		inititalCost=n-1;
	}else{
		inititalCost=n-2;
	}

	int cost=0;
	for(int i=0;i<odd.size();i++){
		for(int j=0;j<even.size();j++){



		if(odd[i].first<=even[j].first){

			int temp=even[j].first-odd[i].first+abs(even[j].second-odd[i].second);

			if(temp>cost){

				swapableOdd=odd[i];
				swapableEven=even[j];
				cost=temp;
			}
		}
	}

	}


	// cout<<inititalCost<<" "<<cost<<endl;
	int ans=0;

	if(cost>inititalCost){

		v[swapableOdd.second]=0;
		v[swapableEven.second]=0;
		ans=cost;

	}else{
		ans=inititalCost;
	}


	for(int i=0;i<n;i++){

		if(i%2==0){
			ans+=v[i];
		}else{
			ans-=v[i];
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