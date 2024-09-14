#include<bits/stdc++.h>
using namespace std;


int t[4*1000];


void build(vector<int>&v,int index,int left,int right)
{

	if(left==right)
	{
		t[index]=v[left];
	}
	else
	{
		int mid=left+(right-left)/2;

		build(v,2*index,left,mid);
		build(v,2*index+1,mid+1,right);


		t[index]=__gcd(t[2*index],t[2*index+1]);
	}
}


void update(int index,int left,int right,int pos,int new_value)
{

	if(left==right)
	{
		t[index]=new_value;
	}
	else
	{
		int mid=left+(right-left)/2;

		if(pos<=mid)
		{
			update(2*index,left,mid,pos,new_value);
		}
		else
		{
			update(2*index+1,mid+1,right,pos,new_value);
		}

		t[index]=__gcd(t[2*index],t[2*index+1]);
	}
}


int getGcd(int index,int left,int right,int qleft,int qright)
{
	// cout<<"hello"<<endl;
	if(qleft>qright)
	{
		return 0;
	}
	if(qleft==left&&qright==right)
	{
		return t[index];
	}

	int mid=left+(right-left)/2;

	return __gcd(getGcd(2*index,left,mid,qleft,min(qright,mid)),getGcd(2*index+1,mid+1,right,max(qleft,mid+1),qright));
}

void solve(){
	
	int n;
	cin>>n;

	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	build(v,1,0,n-1);

	int gcd=getGcd(1,0,n-1,0,1);
	cout<<gcd<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
