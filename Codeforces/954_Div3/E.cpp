#include<bits/stdc++.h>
using namespace std;
int k;
bool cmp(int i,int j)
{
	if((i%k)==(j%k))
		return i<j; 
	else
		return (i%k)<(j%k);
}

void solve(){
	
	int n;
	cin>>n>>k; 

	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}	

	sort(v.begin(),v.end(),cmp);

	int ans=0;

	bool flag=false;
	vector<int>prefix(n),suffix(n);
	for(int i=0;i<n;i++)
	{
		int j=i;
		while((j+1)<n&&(v[i]%k)==(v[j+1]%k))
		{
			j++;
		}

		if((j-i+1)%2)
		{
			if(flag)
			{
				ans=-1;
				break;
			}
			for(int l=i;l<=j;l++)
			{
				prefix[l]=suffix[l]=0;
			}

			for(int l=i+2;l<=j;l+=2)
			{
				prefix[l]=prefix[l-2]+(v[l-1]-v[l-2])/k;
			}

			for(int l=j-2;l>=i;l-=2)
			{
				suffix[l]=suffix[l+2]+(v[l+2]-v[l+1])/k;
			}

			int tmp=INT_MAX;

			for(int l=i;l<=j;l+=2)
			{
				tmp=min(tmp,suffix[l]+prefix[l]);
			}

			ans+=tmp;
			flag=true;
		}
		else
		{
			for(int l=i;l<=j;l+=2)
			{
				ans+=(v[l+1]-v[l])/k;
			}
		}
		i=j;
	}
	
	cout<<ans<<endl;
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
