#include<bits/stdc++.h>
using namespace std;


int main(){


	int t;
	cin>>t; 

	while(t--){

		int n;
		cin>>n; 
		std::vector<int> a(n),b(n);


		for(int i=0;i<n;i++){

			cin>>a[i];
		}

		for(int i=0;i<n;i++){
			cin>>b[i];
		}

		if(a[n-1]!=b[n-1]){


			cout<<"NO"<<endl;
		}else{


			bool flag=true;

			for(int i=n-2;i>=0;i--){

				if(a[i]==b[i]||a[i]^a[i+1]==b[i]||a[i]^b[i+1]==b[i]){
					continue;
				}
				flag=false;
				break;
			}


			cout<<(flag?"Yes":"NO")<<endl;
		}
	}
}