// #include<bits/stdc++.h>
// using namespace std;


// void solve(){
	
// 	int n,k;
// 	cin>>n>>k; 

// 	std::vector<int> v(n);

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>v[i];
// 	}
// 	sort(v.begin(),v.end());

// 	vector<int>range(2*k);
// 	int mx=v[n-1];
// 	int mod=2*k;
// 	for(int i=0;i<n;i++)
// 	{
// 		int x=v[i]%mod;
// 		if(x<k)
// 		{
// 			range[x]++;
// 			range[x+k]--;
// 		}
// 		else
// 		{
// 			range[0]++;
// 			range[x-k]--;
// 			range[x]++;
// 		}
// 	}
// 	int ans=1e9;
// 	partial_sum(range.begin(),range.end(),range.begin());//prefix sum
// 	for(int i=0;i<mod;i++)
// 	{
// 		if(range[i]==n)
// 		{
// 			int r=mod*(mx/mod)+i;

// 			if(r<mx)
// 			{
// 				r+=mod;

// 			}
// 			ans=min(ans,r);
// 		}
// 	}

// 	if(ans==1e9)
// 		cout<<-1<<endl;
// 	else
// 		cout<<ans<<endl;


// }

// int32_t main()
// 	{
// 		ios_base::sync_with_stdio(false); cin.tie(NULL);
// 		int t;
// 		cin>>t;
// 		while(t--)
// 		{
// 			solve();
// 		}
// 	}



#include<bits/stdc++.h>
using namespace std;

bool compare(unordered_map<char,int>&x,unordered_map<char,int>&y,int l,int r)
{
	bool flag=true;
	for(auto [i,j]:x)
	{
		if(y.find(i)!=y.end())
		{
			// cout<<"compare : "<<j<<" "<<y[i]<<" "<<i<<" "<<l<<" "<<r<<endl;

			if(y[i]>=j)
			{
				continue;
			}
			else
			{
				flag=false;
			}

			// continue;
		}
		else
		{
			flag=false;
		}
	}
	// cout<<"flag : "<<flag<<endl;

	return flag;
}

int steadyGene(string gene) {
 
 int mn=gene.length()/4;
 vector<int>v(5);
 unordered_map<int,char>mp={{1,'A'},{2,'C'},{3,'T'},{4,'G'}};
 int extra=0;
 for(auto x:gene)
 {
     if(x=='A')
        v[1]++;
     if(x=='C')
        v[2]++;
     if(x=='T')
        v[3]++;
      if(x=='G')
        v[4]++;
 }

 cout<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<endl;
 if(max(v[1],max(v[2],max(v[3],v[4])))==(gene.length()/4))
 {
 	return 0;
 }
 unordered_map<char,int>mp1,mp2;
    char change;

    for(int i=1;i<=4;i++)
    {
        if(v[i]>mn)
        {

            mp1[mp[i]]=v[i]-mn;
            // cout<<"mp1 : "<<mp1[mp[i]]<<endl;
        }
    }

    // for(auto [y,z]:mp1)
    // 	cout<<y<<" "<<z<<endl;
    //   cout<<"helo"<<endl;

    int ans=INT_MAX;
    int i=0;
    int j=0;
    int n=gene.length();

    while(i<n)
    {
        if(mp1.find(gene[i])!=mp1.end())
        {
        	// cout<<"inital i "<<i<<endl;
            break;
        }
        i++;
    }
    j=i;
    int x=0;
    while(j<n)
    {
        if(mp1.find(gene[i])!=mp1.end())
        {
            mp2[gene[j]]++;
        }
        
        if(compare(mp1,mp2,i,j))
        {
        	// cout<<"range "<<j<<" "<<i<<endl;
            ans=min(ans,j-i+1);
            i++;
            while(i<=j)
            {
                if(mp1.find(gene[i])!=mp1.end())
                {
                    mp2[gene[i]]--;
                    if(compare(mp1,mp2,i,j))
                    {
                    	ans=min(ans,j-i+1);
                    }
                    else
                    {
                    	break;
                    }

                }
                i++;
                
            }
        }
        j++;
        
    }
    return ans;
}
void solve(){
	
	int n;
	cin>>n; 
	string s;
	cin>>s; 
	cout<<steadyGene(s)<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
