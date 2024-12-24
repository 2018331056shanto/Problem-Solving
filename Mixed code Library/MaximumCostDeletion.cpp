#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    std::vector<int> v;
		int n,a,b;
		cin>>n>>a>>b;
		string s;
		cin>>s;
		int cnt=1;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==s[i+1])
			{
				cnt++;

			}
			else
			{
				v.push_back(cnt);
				cnt=1;
			}
		}
		
		int ans=0;
		int k=0;
		int l=0;
	
			for(int i=1;i<v.size();i++)
			{
				k+=v[i];
				++i;
			}
		
		
		
			for(int i=0;i<v.size();i++)
			{
				l+=v[i];
				++i;
			}
			//cout<<k<<" "<<l<<endl;

        if(a<=0&&b>=0)
        {
        	cout<<n*(a+b)<<endl;
        }
        else if(a>=0&&b>=0)
        {
        	cout<<n*(a+b)<<endl;
        } 
        else 
        {
        	if(v.size()%2==0)
        	{
        		for(int i=0;i<v.size();i++)
        		{
        			ans+=a*v[i]+b;
        			++i;
        		}
        		ans+=a*k+b;
        	}
        	else
        	{
        		for(int i=1;i<v.size();i++)
        		{
        			ans+=a*v[i]+b;
        			++i;
        		}
        		ans+=l*a+b;
        	}
        	cout<<ans<<endl;

    //     	if(max(l,k)==l)



    //     	{
    //     		for(int i=1;i<v.size();i++)
    //     		{
    //     			//cout<<v[i]<<endl;
    //     			ans+=v[i]*a+b;
    //     			++i;
    //     		}

    //     		ans+=l*a+b;
    //     		//cout<<"fuck"<<endl;

    //     	}
    //     	else
    //     	{
    //     		for(int i=0;i<v.size();i++)
    //     		{
    //     			ans+=v[i]*a+b;
    //     			++i;
    //     		}
    //     		ans+=k*a+b;
    //     		//cout<<"you"<<endl;

    //     	}
			 // cout<<ans<<endl;
        }
       
	}
}	