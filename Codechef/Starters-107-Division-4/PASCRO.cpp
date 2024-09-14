// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    string a,b;
// 	    cin>>a>>b;
// 	    int cnt1=0;
// 	    int cnt2=0;
	    
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(a[i]==b[i])
// 	        {
// 	            continue;
// 	        }
// 	        else if(a[i]=='R'&&b[i]=='S')
// 	        {
// 	            cnt1++;
// 	        }
// 	        else if(a[i]=='S'&&b[i]=='P')
// 	        {
// 	            cnt1++;
// 	        }
// 	        else if(a[i]=='P'&&b[i]=='R')
// 	        {
// 	            cnt1++;
// 	        }
// 	        else
// 	        {
// 	            cnt2++;
// 	        }
	        
	    
// 	    }
// 	    if(cnt1==cnt2)
// 	    {

// 	        cout<<1<<endl;
// 	    }
// 	    if(cnt1>cnt2)
// 	    {
// 	        std::cout << 0 << std::endl;
// 	    }
	    
// 	    else
// 	    {
// 	    	if(n%2==0)
// 	    	{
// 	    		n++;
// 	    	}
// 	         int x=ceil((double)n/2);
// 	         cout<<x-cnt1<<endl;
// 	    }
	    
// 	}
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    int cnt0=0;
	    int cnt1=0;
	    std::vector<int>a,b ;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        {
	            cnt0++;
	        }
	       else {
	           
	           a.push_back(cnt0);
	           cnt0=0;
	       }
	       
	       if(s[i]=='1')
	       {
	           cnt1++;
	       }
	       else
	       {
	           b.push_back(cnt1);
	           cnt1=0;
	       }
	    }
	    
	    // for(auto x:a)
	    // {
	    //     cout<<x<<" ";
	    // }
	    // cout<<endl;
	    // for(auto x:b)
	    // {
	    //     cout<<x<<" ";
	    // }
	    // cout<<endl;

	    if(a.size()==0||b.size()==0)
	    {
	    	cout<<"Yes"<<endl;
	    }
	    else {

	    	bool flag=false;
	    	bool flag1=false;
	    	for(int i=0;i<a.size();i++)
	    	{
	    		if(a[i]%2)
	    		{
	    			flag=true;
	    			break;
	    		}
	    	}

	    	for(int i=0;i<b.size();i++)
	    	{
	    		if(b[i]%2)
	    		{
	    			flag1=true;
	    			break;
	    		}
	    	}

	    	if(flag1&&flag)
	    	{
	    		cout<<"No"<<endl;
	    	}
	    	else
	    	{
	    		cout<<"Yes"<<endl;
	    	}
	    }
	    
	}
	return 0;
}

