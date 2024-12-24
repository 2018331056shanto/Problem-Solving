#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007


		//a^p % M
long long BigMod(long long a, long long p, long long M=MOD){
    if(!p) return (1%M);
    long long x=BigMod(a, p/2, M);
    x=(x*x)%M;//Overflow?
    if(p&1) x=(x*a)%M;
    return x;
}
 
//inv of n % M
long long getInv(long long n, long long M=MOD){
    return BigMod(n, M-2, M);
}


pair<int,int> binarySearch(vector<int>&a,int l,int r,int x)
{
	 while (l <= r) {
        int m = l + (r - l) / 2;
 
        if (a[m] == x)
            return {m,a[m]};
 
        if (a[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
    }
 
    return {l,0};
}


void solve(){
	
	int n;
	cin>>n;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>b[i];
	}

sort(a.begin(),a.end());
sort(b.begin(),b.end());

if(n==2)
{

	if((a[0]<=b[1]||a[1]<=b[0])&&(a[0]<=b[0]||a[1]<=b[1]))
	{
		// cout<<"Hello"<<endl;
		cout<<0<<endl;
		return;
	}
}

long long ans=1;
for(int i=0;i<n;i++)
{
	if(a[i]<=b[i])
	{
		cout<<0<<endl;
		return ;
	}
	auto [index,value]=binarySearch(a,0,i,b[i]);
	// cout<<index<<" "<<value<<endl;

	if(i-index==0)
	{

	
		ans*=1;

	}
	else if(b[i]==value)
	{
		++index;


		ans=(ans%MOD*(i-index+1)%MOD)%MOD;
	}
	else
	{
		
		ans=(ans%MOD*(i-index+1)%MOD)%MOD;


	}



}
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
