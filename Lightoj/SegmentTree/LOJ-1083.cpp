#include<bits/stdc++.h>
using namespace std;

struct Tree{

	int val=INT_MAX;
	int idx=INT_MAX;

}tree[4*30000],demo;

void build(vector<int>&v,int index,int left,int right){

	if(left==right)
	{
		tree[index]={v[left],left};
	}
	else
	{
		int mid=left+(right-left)/2;

		build(v,2*index,left,mid);
		build(v,2*index+1,mid+1,right);

		if(tree[2*index].val<tree[2*index+1].val)
		{
			tree[index]=tree[2*index];
			// cout<<tree[index].val<<" < "<<tree[index].idx<<endl;
		}
		else
		{
			tree[index]=tree[2*index+1];
			// cout<<tree[index].val<<" > "<<tree[index].idx<<endl;

		}
	}
}


 Tree query(int index,int left,int right,int qleft,int qright)
 {


	if(left>right)
	{
		return demo ;
	}
 	if(left>qright||right<qleft)
	{
		return demo;
	}
	
 	if(qleft<=left&&qright>=right)
	{
		
		return tree[index];
	}

 	int mid=left+(right-left)/2;
 	Tree x= query(2*index,left,mid,qleft,qright);
 	Tree y=query(2*index+1,mid+1,right,qleft,qright);

 	// cout<<x.val<<" "<<y.val<<endl;
 	if(x.val<y.val)
 	{
 	
 		return x;
 	}
 	else
 	{
 		
 		return y;
 	}


 }

 int getHistogram(vector<int>&v,int left,int right,int n)
 {
 	if(left>right)
 	{
 		return 0;
 	}
 	if(left==right)
 	{
 		return v[left];
 	}


 	Tree q=query(1,0,n-1,left,right);

 	int rec1=q.val*(right-left+1);

 	int rec2=getHistogram(v,left,q.idx-1,n);
 	int rec3=getHistogram(v,q.idx+1,right,n);

 	return max(rec1,max(rec2,rec3));


 }

int  solve(){
	

	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}



	build(v,1,0,n-1);	
	int ans=getHistogram(v,0,n-1,n);
	return ans;


}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		for(int i=1;i<=t;i++)

		{

			cout<<"Case "<<i<<": "<<solve()<<endl;
		}
	}
