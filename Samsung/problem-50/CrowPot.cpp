/*
There are N pots. Every pots has some water in it. They may be partially filled. 
Every pot is associated with overflow number O which tell how many minimum no. of stones required 
for that pot to overflow. The crow know O1 to On(overflow no. for all the pots). Crow wants some K 
pots to be overflow. So the task is minimum number of stones he can make K pots overflow in worst case.

Array of overflow no--. {1,...,On}
Number of pots--n
No of pots to overflow-- k

Let say two pots are there with overflow no.s {5,58}, and crow has to overflow one pot(k=1). 
So crow will put 5 stones in pot with overflow no.(58), it will not overflow, then he will put in 
pot with overflow no.(5), hence the total no. of stones to make overflow one pot is=10.


2 1
58 5

*/

#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>


using namespace std;

int pop_count(int mask)
{
	int cnt=0;

	while(mask)
	{
		if(mask&1)
		{
			cnt++;
		}
		mask/=2;
	}
	return cnt;
}

void solve()
{
	int n,k;
	cin>>n>>k;


	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	sort(v.begin(),v.end());

	long long ans=v[n-1]*k;

	for(int mask=0;mask<(1<<n);mask++)
	{
		if(pop_count(mask)!=k)
		{
			continue;
		}

			long long cur=0; 

			int last=n;

			for(int j=n-1;j>=0;j--)
			{
				if(mask&(1<<j))
				{
					cur+=v[j]*(last-j);
					last=j;
				}
			}
		ans=min(ans,cur);
	}

	cout<<ans<<endl;

}

int main()
{
	solve();
}