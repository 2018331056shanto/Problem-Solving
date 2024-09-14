#include<bits/stdc++.h>
using namespace std;

const int maxn=200100;

int a[maxn],n;

vector<int>path(int x,int y)
{
	vector<int>L,R; 

// It's helper to compute the 2-based logarithm of integer number, i.e. it return the index of highest set bit in the number (or -1 for 0).

// I.e. for 1 it will return 0, for 16 it will return 4, for 1024 it will return 10, etc.

// This can be used to efficiently predict the pre-allocated size for arrays, round to the nearest power of 2 and thing like that.
	

	//here in this function we are leveling 
	//the depth of x and y 

	//this loop if depth of x is greater than y

	// using __lg(x) we are calculating the left most set bit 
	// if it's set bit is bigger than y then we are right shiftin
	// x so that we can make this as in the equal level as y 

	//it's binary lifting 

	while(__lg(x)>__lg(y))
	{
		L.push_back(x); 
		x>>=1;
	}

	while(__lg(y)>__lg(x))
	{
		R.push_back(y);
		y>>=1; 
	}


//till here y and x has the same level then to find the LCA we are moving
	// x and y simulteniously
	while(x!=y)
	{
		L.push_back(x);
		R.push_back(y);
		x>>=1;
		y>>=1;
	}
	// cout<<x<<" "<<y<<endl;

	L.push_back(x);

	reverse(R.begin(),R.end());

	for(int x:R)
	{
		L.push_back(x);

	}
	// for(auto i:L)
	// {
	// 	cout<<i<<" ";
	// }
	// cout<<endl;
	return L;
}

void solve(){
	
	// int n;

	cin>>n; 
	
	std::vector<int> vc;

	int l=-1;
	int r=-1;

	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]!=-1)
		{
			if(l==-1)
			{
				l=i; 
			}
			r=i; 
			vc.push_back(i);
		}
	}

	if(l==-1)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<(i&1)+1<<" ";
		}
		cout<<endl;
		return; 
	}


	

	for(int i=l-1;i>0;--i)
	{
		a[i]=(((l-i)&1)?a[l]*2:a[l]);
	}
	// cout<<"fuck you"<<endl;

	for(int i=r+1;i<=n;i++)
	{
		a[i]=(((i-r)&1)?a[r]*2:a[r]);
	}


	for(int x=1;x<vc.size();x++)
	{
		int l=vc[x-1],r=vc[x];

		vector<int>p=path(a[l],a[r]);

		if((p.size()&1)!=((r-l+1)&1)|| r-l+1<p.size())
		{
			cout<<-1<<endl;
			return;
		}

		for(int i=0;i<p.size();i++)
		{
			a[l+i]=p[i];

		}
		for(int i=l+p.size(),o=1;i<=r;++i,o^=1)
		{
			a[i]=(o?a[i-1]*2:a[i-1]/2);
		}
	}


	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
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
