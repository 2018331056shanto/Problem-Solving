#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	string target="CODETOWN";
	std::set<char>st={'A','E','I','O','U'} ;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    bool flag=true;
	    
	    if(s.length()!=target.length())
	    {
	        cout<<"NO"<<endl;
	        
	    }
	    else
	    {
	        for(int i=0;i<s.length();i++)
	        {
	            if(st.find(target[i])==st.end()&&st.find(s[i])==st.end())
	            {
	            	flag=true;
	            }
	            else if(st.find(target[i])!=st.end()&&st.find(s[i])!=st.end())
	            {
	            	flag=true;
	            }
	            else
	            {
	            	flag=false;
	            	break;
	            }
	        }
	        if(flag)
	        {
	        	cout<<"YES"<<endl;
	        }
	        else
	        {
	        	cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
 