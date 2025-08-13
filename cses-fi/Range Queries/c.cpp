#include<bits/stdc++.h>
using namespace std;

int  calculateChild(vector<vector<int>>&adj,int par,int child,vector<int>&childNumber,vector<int>&parentList){

	// cout<<par<<" "<<child<<endl;

	parentList[child]=par;
	

	int cnt=0;
	for(int i=0;i<adj[child].size();i++){
		if(adj[child][i]!=par)

			cnt+=1+calculateChild(adj,child,adj[child][i],childNumber,parentList);
	}
	 childNumber[child]=max(childNumber[child],cnt);
	 return 0;
	
}

int main(){



	int t;
	cin>>t;
	while(t--){

		// cout<<"====================="<<endl;
		int n;
		cin>>n; 
	
		std::vector<vector<int>> v;
		for(int i=0;i<=n+1;i++){

			vector<int> temp;
			v.push_back(temp);

		}

		vector<int>check(n+1);


		for(int i=1;i<n;i++){
			int x,y;
			cin>>x>>y;
			check[x]=y;
			check[y]=x;
			v[x].push_back(y);
			v[y].push_back(x);
		}

		int root=-1;
		int mx=0;

		for(int i=0;i<=n;i++){

			// cout<<i<<" "<<v[i].size()<<endl;
			if(v[i].size()>mx){
				mx=v[i].size();
				root=i;
			}
		}

		vector<int>parentList(n+1);
		vector<int>child(n+1);


		calculateChild(v,-1,root,child,parentList);
		for(int i=0;i<=n;i++){
			cout<<i<<" "<<child[i]<<endl;
		}

	}


}