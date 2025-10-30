#include<bits/stdc++.h>
using namespace std;
#define MAX 250010

int A[MAX];
int sum[2][MAX];
int diff[MAX];
int diffSum[MAX];
void solve(){

int n,q;
cin>>n>>q;


for(int i=1;i<=n;i++){
	cin>>A[i];
}
for(int i=1;i<=n;i++){

	
	sum[0][i]=sum[0][i-1];
	sum[1][i]=sum[1][i-1];

	sum[A[i]][i]++;

	diff[i]=(A[i]!=A[i-1]);
	diffSum[i]=diffSum[i-1]+diff[i];

}

		int r,l;

	for(int i=0;i<q;i++){
		cin>>l>>r;


		int zero=sum[0][r]-sum[0][l-1];
		int one=sum[1][r]-sum[1][l-1];

		if(zero%3){
			cout<<-1<<endl;
			continue;
		}

		if(one%3){
			cout<<-1<<endl;
			continue;
		}
		int sum=zero/3+one/3;

		if((diffSum[r]-diffSum[l])==(r-l)){
			sum++;
		}
		cout<<sum<<endl;
	}
}
	




int main(){


	int t;
	cin>>t;
	while(t--){
		solve();
	}
}




