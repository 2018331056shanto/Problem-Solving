#include<bits/stdc++.h>
using namespace std;

int t[4*100];

void buildSegmentTree(vector<int>&v,int index,int left,int right)
{

	if(left==right)
	{
		t[left]=v[left];
	}
	else
	{
		int mid=left+(right-left)/2;

		buildSegmentTree(v,2*index,left,mid);

		buildSegmentTree(v,2*index+1,mid+1,right);

		t[index]=t[2*index]+t[2*index+1];
	}


}

int query(int idx,int left,int right,int qleft,int qright)
{

}

void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	buildSegmentTree(v,1,0,n-1);

	int sum=query(1)



}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
