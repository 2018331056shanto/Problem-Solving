#include <bits/stdc++.h>
using namespace std;



void solve(){

	int n,m;
	cin>>n>>m;
	if(n<2||m<2)
	{
		cout<<n<<" "<<m<<endl;
		return;
	}

	if(n<4&&m<4)
	{
		cout<<2<<" "<<2<<endl;
	}
	else
	{
		cout<<1<<" "<<1<<endl;
	}
	

}


int main(){
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}