#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	std::vector<pair<int,pair<int,pair<long long int ,int>>>> v;
	v.push_back({0,{0,{0,0}}});
    long long int s=2;
    int l=0;
    int k=0;
    for(int i=3;i<20;i++)
    {
    	s*=i;
    	for(int j=1;j<30;j++)
    	{
    		if(s%j!=0)
    		{

    			++l;
    			k+=j;
    			if(l==1)
    			{
    				v.push_back({4,{1,{6,4}}});
    			break;
    			}
    			else
    			{
    				v.push_back({j,{l+1,{s,k+j}}});
    				break;
    			}

    		}

    	}
    }
    // for(int i=0;i<v.size();i++)
    // cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second.first<<" "<<v[i].second.second.second<<endl;
   int t;
   cin>>t;
   while(t--)
   {
   	long long int n;
   	cin>>n;                        
   	long long int ans=0;
   	if(n%2==0)
   	{
   		ans=((n/2)*2);
   	}

   	else
   	{
   		ans=(((n/2)+1)*2);
   	}
   //cout<<"ans prev "<<ans<<endl;
   	int x=0;
   	for(int i=1;i<v.size();i++)
   	{
   		if(n==v[i].second.second.first)
   		{
   			x=v[i].second.first;
   			ans+=(v[i].second.second.second);
   			
   			//cout<<"ans n==v[i] "<<ans<<endl;
   			break;
   			
   		}
   		else if(n<v[i].second.second.first)
   		{

   			//cout<<"v[i] "<<v[i].second.second.first<<endl;
   			int ll=v[i].second.second.first;
   			//cout<<"v[i+1] "<<ll<<endl;
   			if(n<ll/2)
   			{
   				x=v[i-1].second.first;
   				//cout<<"x n<ll  "<<x<<endl;
   				ans+=(v[i-1].second.second.second);
   				//cout<<"ans n<ll "<<ans<<endl;
   				break;
   			}
   			if(n>=ll/2)
   			{
   				x=v[i].second.first-1;
   				//cout<<"x n>=ll "<<x<<endl;
   				ans+=(v[i].second.second.second-v[i].first);
   				//cout<<"ans v[i+1] "<<ans<<endl;
   				break;
   			}


   			
   		}

   	}
   	   //cout<<" last "<<x<<endl;
   		ans+=(((n/2)-x)*3);
   		cout<<ans<<endl;
   	

   }
   
}	
