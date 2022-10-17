#include<bits/stdc++.h>
using namespace std;

const int MAX = 300300;

int n;
int arr[MAX];

int recurance(int l,int r)
{
	if(r-l==1)
		return 0;
	int mid=(l+r)>>1;

	int mxl=*max_element(arr+l,arr+mid);
	int mxr=*max_element(arr+mid,arr+r);
	int ans=0;

	if(mxl>mxr)
	{
		++ans;
		for(int i=0;i<(mid-l);i++)
		{
			swap(arr[l+i],arr[mid+i]);
		}
	}
	return recurance(l,mid)+recurance(mid,r)+ans;

}

int solve_ans(){


	int ans=recurance(0,n);
	// cout<<ans<<endl;
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	if(is_sorted(arr,arr+n))
		return ans;
	return -1;
}
void solve(){
	
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}

	cout<<solve_ans()<<endl;

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
