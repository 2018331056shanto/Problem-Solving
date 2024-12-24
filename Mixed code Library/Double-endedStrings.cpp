#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		if(b.size()>a.size())
		{
			swap(a,b);
		}
		int lcs[a.size()+1][b.size()+1];
		for(int i=0;i<a.size()+1;i++)
		{
			for(int j=0;j<b.size()+1;j++)
			{
				lcs[i][j]=0;
			}
		}
		for(int i=0;i<=a.size();i++)
		{
			for(int j=0;j<=b.size();j++)
			{
				if(i==0||j==0)
				{
					lcs[i][j]=0;
				}
				else if(a[i-1]==b[j-1])
				{
					//cout<<b[i-1]<<" "<<a[j-1]<<endl;
					lcs[i][j]=lcs[i-1][j-1]+1;
				}
				else
				{
					lcs[i][j]=0;
				}
				
			}
		}
		int x=0;
		for(int j=0;j<=a.size();j++)
		{
			for(int k=0;k<=b.size();k++)
			{
				x=max(x,lcs[j][k]);
			}
			
		}
		//cout<<x<<endl;
		cout<<(a.size()-x)+(b.size()-x)<<endl;
}	}