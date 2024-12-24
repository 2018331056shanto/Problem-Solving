#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	unsigned long long n,q;
	cin>>n>>q;
	vector<unsigned long long>even,odd;
	for(int i=0;i<n;i++)
	{
		unsigned long long x;
		cin>>x;
		if(x%2==0)
		{

			even.push_back(x);
			// cout<<x<<endl;

		}
			else
		odd.push_back(x);
	}
	// cout<<odd.size()<<" "<<even.size()<<endl;
unsigned long long evensum=0;
unsigned  long long oddsum=0;
for(int i=0;i<even.size();i++)
{
	evensum+=even[i];
}
for(int i=0;i<odd.size();i++)
{
	oddsum+=odd[i];
}


unsigned long  long modev=even.size();
unsigned  long long mododd=odd.size();

for(int i=0;i<q;i++)
{
	unsigned long long x,y;
	cin>>x>>y;
	if(x%2==0)
	{

		unsigned long long totev=modev*y;
		// cout<<"even :"<<totev<<endl;
		if(y%2==1)
		{

			mododd+=modev;
			modev=0;
		}
		else{
			modev=modev;
		}
		evensum+=totev;
		// cout<<"evensum :"<<evensum<<endl;
	}
	else{
		unsigned long long totodd=mododd*y;
		if(y%2==0)
		{
			mododd=mododd;
		}
		else{
			modev+=mododd;
			mododd=0;
		}
		oddsum+=totodd;
	}
	// cout<<mododd<<" "<<modev<<endl;
	// cout<<evensum<<" "<<oddsum<<endl;
	unsigned long long total=oddsum+evensum;
	cout<<total<<endl;
}


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
