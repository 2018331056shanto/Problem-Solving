#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	long long ans=0;
	cin>>n;
	vector<int>v;
	int pos=0;
	int cntpos=0;
	int neg=0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		if(x>0)
			pos++;
		else if(x<0)
			neg++;
		ans+=abs(x);
		if(x==0)
			continue;
		else
			v.push_back(x);
	}

	if(pos==n)
	{
		cout<<ans<<" "<<0<<endl;
		return;
	}
	if(ans==0)
	{
		cout<<0<<" "<<0<<endl;
		return;
	}
	if(neg==0){
		cout<<ans<<" "<<0<<endl;
		return;
	}
	int pre=0,post=0;

	for(int i=0;i<v.size();i++)
	{
		if(v[i]<0)
		{
			pre=i;
			break;
		}
	}
	for(int i=v.size()-1;i>=0;i--)
	{
		if(v[i]<0)
		{
			post=i;
			break;
		}
	}
	int cnt=0;
	int last=pre;
	for(int i=pre+1;i<=post;i++)
	{
		if(v[i]<0)
		{
			if(i-last==1)
			{
				last=i;

			}
			else{

				// cout<<i<<" "<<last<<endl;
				cnt++;
				last=i;
			}
		}else
		{
			cntpos++;
		}
	}

	cout<<ans<<" ";
	if(cnt+1<=cntpos)
	{
		cout<<cnt+1<<endl;
	}
	else
	{

		cout<<cntpos+1<<endl;
	}
	// cout<<cntpos<<" : "<<cnt+1<<endl;
	
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
