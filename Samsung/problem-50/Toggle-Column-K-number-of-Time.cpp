/*A binary matrix of nxm was given, you have to toggle any column k number of times so that you can get the maximum number of rows having all 1’s.

for eg, n=3, m=3,

1 0 0

1 0 1

1 0 0
if k=2, then we will toggle column 2 and 3 once and we will get rows 1 and 3 with 1 1 1 and 1 1 1 i.e. all 1’s so answer is 2 as there are 2 rows with all 1’s.

if k=3, then we will toggle column 2 thrice and we will get row 2 with 1 1 1 i.e. all 1’s so answer is 1 as there is 1 row with all 1’s.

3 3 2
1 0 0
1 0 1
1 0 0
*/


#include<iostream>
#include<utility>
#include<map>

using namespace std;

#define MAX 100009
int arr[25][MAX];


void solve()
{

	int n,m,k;
	cin>>n>>m>>k;
	map<string,pair<int,int>>mp;
	string tmp;
	int  cnt=0;
	for(int i=0;i<n;i++)
	{
		tmp="";
		cnt=0;
		for(int j=0;j<m;j++)
		{
			tmp+=to_string(arr[i][j]);
			if(arr[i][j]==0)
			{
				cnt++;
			}
		}

		mp[tmp].first+=1;
		mp[tmp].second=cnt;

	}

	int ans=-1;
	for(auto [a,b]:mp)
	{
		if(b.second==k)
		{
			ans=max(ans,b.first);
		}
		else if(b.second<k&&(k-b.second)%2==0)
		{
			ans=max(ans,b.first);
		}
	}

	cout<<ans<<endl;


}


int main()
{


	solve();
}


