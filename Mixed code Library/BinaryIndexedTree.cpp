 n #include<bits/stdc++.h>
using namespace std;
struct BinaryIndexedTree
{//1based-index
	std::vector<int> bit;
	int n;
	BinaryIndexedTree(int _n)
	{
		n=_n;
		bit.assign(n,0);
	}
	// BinaryIndexedTree(vector<int>a)
	// {
	// 	for(int i=0;i<a.size();i++)
	// 	{
	// 		update(i,a[i]);
	// 	}
	// }
	int query(int idx)
	{
		//point query
		int ret=0;
		for(idx;idx>0;idx-=idx&-idx)
		{
			//0-some range sum queries 
			ret+=bit[idx];
			//ret=INF for minimum range 0-some value
			//ret=min(ret,bit[idx])
		}
		return ret;
	}
	int query(int l,int r)
	{
		//range sum query
		
		return query(r)-query(l-1);
		
	}
	void update(int idx,int val)
	{
		//point update
		for(++idx;idx<n;idx+=idx&-idx)
		{
			//for range sum queries
			bit[idx]+=val;
			//for minimum range value
			// bit[idx]=min(bit[idx],val);
		}
	}
	void update(int l,int r, int val)
	{
		//range update
		update(l,val);
		update(r+1,-val);
	}

	
};
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	vector<int>ar;
	for(int i=0;i<9;i++)
	{
		int x;
		cin>>x;
		ar.push_back(x);
	}
	// BinaryIndexedTree(3e5);
	BinaryIndexedTree t(3e5);
	for(int i=0;i<ar.size();i++)
	{
		t.update(i,ar[i]);
	}
	for(int i=0;i<ar.size();i++)
	{
		cout<<t.bit[i]<<" ";
	}
	cout<<endl;
	cout<<t.query(5)<<endl;
	cout<<t.query(4,5)<<endl;
	t.update(4,111);
	cout<<"after updating"<<endl;
	for(int i=0;i<ar.size();i++)
	{
		cout<<t.bit[i]<<" ";
	}
	cout<<endl;
	cout<<t.query(5)<<endl;
	cout<<t.query(4,5)<<endl;

	// BinaryIndexedTree(ar);
	
}
