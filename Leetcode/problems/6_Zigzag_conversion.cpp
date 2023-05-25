#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {

        vector<char>v;
        if(numRows>1){


        for(int i=1;i<=numRows;i++)
        {
            // v.push_back(s[i-1]);
            int pos=i;
            while(pos<=s.length())
            {
                
               
                // cout<<"i "<<i<<" "<<"pos :"<<pos<<endl;
                if((numRows-i)!=0)
                	 v.push_back(s[pos-1]);
                pos+=2*(numRows-i);
                
                if(2*(i-1)==0)
                {
                	continue;
                }
                
                // cout<<"i "<<i<<" "<<"pos :"<<pos<<endl;
                if(pos<=s.length())
                	v.push_back(s[pos-1]);
                pos+=2*(i-1);
            }
        }
    }
    else
    {
    	for(int i=0;i<s.size();i++)
    	{
    		v.push_back(s[i]);
    	}
    }

        string ss="";
      	for(auto x:v)
      	{
      		ss=ss+x;
      	}
       // cout<<endl;
        // cout<<s<<endl;
        return ss;
    }

void solve(){
	
	cout<<convert("Af",1)<<endl;

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
