#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int a,b,c;
	cin>>a>>b>>c; 
	std::vector<int> v(3);
	v[0]=a,v[1]=b,v[2]=c;

	for(int i=0;i<5;i++)
	{
		sort(v.begin(),v.end());
		v[0]+=1;
	}

	cout<<v[0]*v[1]*v[2]<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
