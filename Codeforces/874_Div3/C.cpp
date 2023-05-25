#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<int>a(n);
	int odd=0,even=0;
	int mno=INT_MAX;
	int mne=INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2)
		{
			odd++;
			mno=min(a[i],mno);
		}
		else
		{
			even++;
			mne=min(a[i],mne);

		}
	}

	if (odd==n||even==n)
	{
		/* code */
		cout<<"Yes"<<endl;
		return;
	}

	if(mne-mno>0)
		
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
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
