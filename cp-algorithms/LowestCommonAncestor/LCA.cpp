
// /**
//                         0
//                        / \
//                       1   5
//                      / \   \
//                     2   3   4
//                     	       / \
//                     	      6   7

//                **/
               


#include<bits/stdc++.h>
using namespace std;

std::vector<vector<int>>up;
int LOG=32;
vector<int>depth;

void binaryLifting(int child,vector<vector<int>>&v)
{
	for(int nextChild:v[child])
	{
		up[nextChild][0]=child;
		depth[nextChild]=depth[child]+1;

		for(int i=1;i<LOG;i++)
		{
			up[nextChild][i]=up[up[nextChild][i-1]][i-1];
		}
		binaryLifting(nextChild,v);
	}
}


int get_LCA(int a,int b)
{
	if(depth[a]<depth[b])
	{
		swap(a,b);
	}

	int k=depth[a]-depth[b];

	//now we have to make them in same level


	for(int j=LOG-1;j>=0;j--)
	{
		if(k&(1<<j))
		{
			a=up[a][j];
		}

	}

	//if a and b same node then it's LCA

	if(a==b)
	{
		return a;
	}

	//now we have to move a and b at the same level simultenously so that and b remains the 
	//child of LCA node


	for(int j=LOG-1;j>=0;j--)
	{
		if(up[a][j]!=up[b][j])
		{
			a=up[a][j];
			b=up[b][j];
		}
	}
	return up[a][0];
}


void solve(){
	
	int n,m;
	cin>>n>>m; 
	vector<vector<int>>v(n);
	up=vector<vector<int>>(n,vector<int>(LOG));

	depth=vector<int>(n);

	for(int i=0;i<m;i++)
	{
		int x,y; 
		cin>>x>>y; 

		v[x].push_back(y);
	}


	binaryLifting(0,v);

	int q;
	cin>>q; 

	for(int i=0;i<q;i++)
	{
		int x,y;
		cin>>x>>y; 
		cout<<get_LCA(x,y)<<endl;
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
