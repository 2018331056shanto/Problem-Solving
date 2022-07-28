#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,t;
	cin>>n>>t;
	cout.flush();
	int k;
	cin>>k;
	cout.flush();
	int mnid=0;
	int mxid=n-1;
	while(mnid!=mxid)
	{
		int mid=(mnid+mxid)/2;
		cout<<"? 1"<<" "<<(mid+1)<<endl;
		cout.flush();
		int nOne;
		cin>>nOne;
		int nzero=mid+1-nOne;
		if(nzero<k)
		{
			mnid=mid+1;
		}
		else
		{
			mxid=mid;
		}

	}
	cout<<"! "<<mnid+1<<endl;
	//cout<<"!"<<" "<<ans<<endl;
}	