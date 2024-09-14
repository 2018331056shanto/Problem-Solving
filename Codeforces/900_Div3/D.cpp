#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<int>a(k),b(k);
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<k;i++)
	{
		cin>>b[i];
	}

	int q;
	cin>>q;
	
		for(int i=0;i<q;i++)
	{
		int x;
		cin>>x;

		// int idx=lower_bound(b.begin(),b.end(),x)-b.begin();
		
		int idx=0;
		for(int l=0;l<k;l++)
		{
			if(x==a[l])
			{
				idx=l;
				break;
			}
			else if(x<a[l])
			{
				if(l==0)
				{
					idx=l;
				}
				else
				{
					idx=l-1;
				}
				
				break;
			}
		}
		
		int aa=min(x,a[idx]+b[idx]-x);
		int bb=max(x,a[idx]+b[idx]-x);
		
		for(int i=aa-1,j=bb-1;i<=j;i++,j--)
	{
		swap(s[i],s[j]);
	}

		


	}
	cout<<s<<endl;






}

void reverse(int a,int b,string &s)
{
	
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
