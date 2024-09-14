#include<bits/stdc++.h>
using namespace std;

struct BIT
{
	int n;
	BIT(){};

	std::vector<int>bit;

	BIT(int n){

		this->n=n;
		bit.resize(n+1);
	}


	int query(int pos)
	{

		int ans=0;
		pos=min(n,pos);
		while(pos>0)
		{
			ans+=bit[pos];
			pos-=pos&-pos;
		}
		return ans;
	}


	int query(int left,int right)
	{
		if(left>right || left==0)
		{
			return 0 ;
		}

		return query(right)-query(left-1);
	}


	void update(int pos,int val)
	{
		if(pos<=0)
		{
			return ;
		}

		while(pos<=n)
		{
			bit[pos]+=val;

			pos+=pos&-pos;
		}
	}

	void update(int left,int right,int val)
	{
		if(left>right)
		{
			return ;
		}

		update(left,val);
		update(right+1,-val);
	}


};


void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n+1);
	BIT bit1(n);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];

		bit1.update(i,v[i]);
	}

	int q;
	cin>>q;

	while(q--)
	{
		int type;
		cin>>type;

		if(type==1)
		{
			int x,y;
			cin>>x>>y;

			cout<<"Query : "<<bit1.query(x,y)<<endl;
		}
		if(type==2)
		{
			int x,val;
			cin>>x>>val;
			bit1.update(x,val);

		}
		if(type==3)
		{
			int x,y,val;
			cin>>x>>y>>val;

			bit1.update(x,y,val);
		}
	}
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
