#include<bits/stdc++.h>
using namespace std;
int a[2*100005];
int tab[2*100005][30];
int LOG[2*100005+1];

void sparse(int n)
{
	for(int j=1;j<30;j++)
	{
		for(int i=0;i+(1<<j)-1<=n;i++)
		{
			tab[i][j]=min(tab[i][j-1],tab[i+(1<<(j-1))][j-1]);
			// cout<<tab[i][j]<<" ";
		}
		//cout<<endl;
	}

}
int query(int l,int r)
{
	int k=LOG[r-l+1];

	
	 // cout<<"lob "<<k<<endl;
	 //  cout<<"r "<<r-(1<<k)<<endl;
	//cout<<len<<endl;
	// int k=0;
	// while((1<<k)<len)
	// {
	// 	k++;
	// }
	//cout<<k<<endl;
	//cout<<r-(1<<k)+1<<endl;
	//cout<<" hh"<<endl;
	return min(tab[l-1][k],tab[r-(1<<k)][k]);
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	LOG[1] = 0;
for (int i = 2; i <= 2*100005; i++)
    LOG[i] = LOG[i/2] + 1;
	int n,q; 
	cin>>n>>q; 
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		tab[i][0]=a[i];
	}
	sparse(n);
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<5;j++)
	// 	{
	// 		cout<<tab[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	for(int i=0;i<q;i++)
	{
		int x,y;
	    cin>>x>>y;
	    int ans=query(x,y);
	    cout<<ans<<endl;
	}

	

}	