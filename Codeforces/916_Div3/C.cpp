#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k;
	cin>>n>>k;

	std::vector<int> a(n),b(n);

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}

	vector<int>maxval(n);
	maxval[0]=b[0];
	for(int i=1;i<n;i++)
	{
		maxval[i]=max(maxval[i-1],b[i]);
	}

	// for(auto x:maxval)
	// {
	// 	cout<<x<<" ";
	// }
	// cout<<endl;
	int ans=0;
	int valueToIterate=min(n,k);
	for(int i=0;i<valueToIterate;i++)
	{
		ans+=a[i];
	}

	int substractTotal=0;
	int l=0;
	int mxAns=ans;
	for(int i=valueToIterate-1;i>=0;i--)
	{
		
		int temp=0;
		if(k>n)
		{
			temp=(ans-substractTotal)+((k-valueToIterate+l)*maxval[i]);
		}
		else
		{
			temp=(ans-substractTotal)+(l*maxval[i]);
		}
		substractTotal+=a[i];
		

		mxAns=max(mxAns,temp);
		l++;


	}
	// int mxvaal=*max_element(b.begin(),b.end());
	// if(valueToIterate<k)
	// {
	// 	mxAns+=((k-valueToIterate)*mxvaal);
	// }
	cout<<mxAns<<endl;

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

