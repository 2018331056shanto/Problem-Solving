#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin>>n; 

	string s;
	cin>>s; 

	std::vector<int> v(n+1);

	queue<int>que;
	stack<int>st;

	for(int i=1;i<=n;i++){

		if(s[i-1]=='1'){

			v[i]=i;

			que.push(i);

		}
	}

	queue<int>q1=que;


	if((s[0]=='0'&&s[1]=='1')||(s[n-1]=='0'&&s[n-2]=='1')){
		cout<<"NO"<<endl;
		return;
	}

	int prev=-2;
	while(!q1.empty()){

		int f=q1.front();

		if(f-prev==2){
			cout<<"NO"<<endl;
			return;
		}
		prev=f;
		q1.pop();

	}
	// for(auto x:v){
	// 	cout<<x<<" ";
	// }
	// cout<<endl;


	st.push(1);

	while(!que.empty()){


		int least=st.top();
		
		int front=que.front();
		int index=front;
		while(least<front){
			--index;
			v[index]=least;
			// cout<<front<<" "<<least<<" "<<index<<endl;

			++least;

			
		}
		que.pop();
		st.push(front+1);

	}
	int tn=n;

	for(int i=st.top();i<=n;i++){

		v[i]=tn;
		tn--;
	}

	cout<<"YES"<<endl;
	for(int i=1;i<=n;i++){
		cout<<v[i]<<" ";
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