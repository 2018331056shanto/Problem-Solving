#include<bits/stdc++.h>
using namespace std;
long long gcd(long long num1, long long num2)
{
    if (num2 == 0)
        return num1;
    return gcd(num2, num1 % num2);
}
 
long long lcm_of_array(vector<int> &arr)
{
	if(arr.size()==0)
	{
		return 0;
	}
	if (arr.size()==1)
	{
		return arr[0];
	}
    long long lcm = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        long long num1 = lcm;
        long long num2 = arr[i];
        long long gcd_val = gcd(num1, num2);
        lcm = (lcm * (long long)arr[i]) / gcd_val;
    }
    return lcm;
}


void backtrack(vector<int>&v,unordered_map<int,bool>&mp,vector<int>tmp,int start,int &ans)
{

	if(start==v.size())
	{

		long long lcm=lcm_of_array(tmp);
		// cout<<"lcm : "<<lcm<<endl;
		int sz=tmp.size();

		if(mp.find(lcm)==mp.end())
		{

			ans=max(sz,ans);
		}

		return;
	}

	// cout<<"hldhs"<<endl;
	//skip
	backtrack(v,mp,tmp,start+1,ans);

	tmp.push_back(v[start]);

	backtrack(v,mp,tmp,start+1,ans);
	tmp.pop_back();
}


void solve(){
	
	int n;
	cin>>n; 
	vector<int>v(n);
	unordered_map<int,bool>mp;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];

		mp[v[i]]=true;
	}

	int ans=0; 

	vector<int>tmp;
	// cout<<"hdal;d s"<<endl;
	backtrack(v,mp,tmp,0,ans);

	cout<<ans<<endl;



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
