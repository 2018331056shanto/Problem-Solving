#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long tree[4*1000000];

void update(int index,int left,int right,int pos,int val)
{
	if(left==right)
	{
		tree[index]=val;
	}

	else
	{
		int mid=left+(right-left)/2;

		if(pos<=mid)
		{
			update(2*index,left,mid,pos,val);
		}
		else
		{
			update(2*index+1,mid+1,right,pos,val);
		}

		tree[index]=(tree[2*index]+tree[2*index+1])%mod;
	}
}

int query(int index,int left,int right,int qleft,int qright)
{
	if(qleft>qright)
	{
		return 0;
	}

	if(left==qleft&&right==qright)
	{
		return tree[index];
	}

	int mid=left+(right-left)/2;
	return (query(2*index,left,mid,qleft,min(mid,qright))+query(2*index+1,mid+1,right,max(qleft,mid+1),qright));
}
bool cmp(pair <int,int> a, pair <int,int> b)
{
    if(a.first != b.first)
        return a.first<b.first;
    return a.second>b.second;
}
int main(){
    int t; cin >> t;
    for(int l=1;l<=t;l++){
        int n; cin >> n;
       
   
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
        	int x;
        	cin>>x;
        	v.push_back({x,i});
        }

        sort(v.begin(),v.end(),cmp);

        // for(auto x:v)
        // {
        // 	cout<<x.first<<" "<<x.second<<endl;
        // }
		memset(tree,0,sizeof(tree));

       for(int i=0;i<n;i++)
       {
       		int x=v[i].second;
       		// int val=1;
       		// cout<<"index : "<<x<<endl;
       		int val=query(1,0,n-1,0,x);
       		// cout<<"val "<<val<<endl;
       		update(1,0,n-1,x,val+1);
       		// cout<<"val a: "<<query(1,0,n-1,0,x)<<endl;
       }

      // cout<<tree[0]<<endl;
       int ans=query(1,0,n-1,0,n-1);
       
       cout<<"Case "<<l<<": "<<ans<<endl;

    }
    return 0;
}