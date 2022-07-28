#include<bits/stdc++.h>
using namespace std;
int fact[200005];
#define MOD  998244353
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    fact[0]=1;
    for(int i=1;i<200005;i++)
    {
    	fact[i]=fact[i-1]*i%mod
    }
    int s,t;
    cin>>s>>t;
    
	
}