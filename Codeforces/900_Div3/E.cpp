#include<bits/stdc++.h>
using namespace std;
int seg[4*100000];
void build(vector<int>&v,int at,int l,int r)
{


	if(l==r)
	{
		seg[at]=v[l];
		// cout<<at<<" "<<seg[at]<<endl;
		return;
	}

	int mid=l+(r-l)/2;

	build(v,2*at+1,l,mid);
	build(v,2*at+2,mid+1,r);
	seg[at]=seg[2*at+1]&seg[2*at+2];
}

int query(int at,int l,int r,int ql,int qr)
{
	if(ql>r||qr<l)
	{
		return -1;
	}

	if(ql<=l&&r<=qr)
	{
		return seg[at];
	}

	int mid=l+(r-l)/2;
	int resl=query(2*at+1,l,mid,ql,qr);
	int resr=query(2*at+2,mid+1,r,ql,qr);

	return resl&resr;

}

void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>v[i];

	}

	build(v,0,0,n-1);
	for(int i=0;i<4*n;i++)
	{
		cout<<seg[i]<<" ";
	}
	cout<<endl;

	int q;
	cin>>q;
	vector<int>anss;
	for(int i=0;i<q;i++)
	{
		int left,k;
		cin>>left>>k;
		--left;

		int right=n-1;

		int ans=-1;
		
int mid=left+(right-left)/2;

		while(left<=right)
		{
			
			if(left==right&&v[left]<k)
				break;

			if(query(0,0,n-1,left,right)>=k&&(right+1==n||query(0,0,n-1,left,right+1)<k))
			{
				ans=right+1;
				break;

			}

			if(query(0,0,n-1,left,mid)>k&&(mid+1==n||query(0,0,n-1,left,mid+1)<k))
			{
				ans=mid+1;
				break;
			}

			if(query(0,0,n-1,left,mid)<k)
			{
				right=mid-1;

			}
			else if(query(0,0,n-1,left,mid)>=k)
			{
				mid=(mid + right) / 2 + 1;
			}


		}
		// anss.push_back(ans);

	}

for(auto x:anss)
{
	cout<<x<<" ";
}
cout<<endl;

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
