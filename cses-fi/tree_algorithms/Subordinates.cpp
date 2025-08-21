#include<bits/stdc++.h>
using namespace std;


int getSubordinates(vector<vector<int>>&v,int root,vector<int>&ans){

	if(v[root].size()==0){

		ans[root]=0;
		return 0;
	}

	int count=0;

	for(int i=0;i<v[root].size();i++){

		count+=1+getSubordinates(v,v[root][i],ans);
	}
	ans[root]=count;

	return count;


}

int main(){

	int n;
	cin>>n; 

	std::vector<vector<int>> v(n+1);

	for(int i=2;i<=n;i++){
		int x;
		cin>>x;
		v[x].push_back(i);
	}
	vector<int>ans(n+1);

	getSubordinates(v,1,ans);

	for(int i=1;i<=n;i++){

			cout<<ans[i]<<" ";
	}
	cout<<endl;

	// for(int i=1;i<=n;i++){
	// 	for(int j=0;j<v[i].size();j++){
	// 		cout<<v[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
}


