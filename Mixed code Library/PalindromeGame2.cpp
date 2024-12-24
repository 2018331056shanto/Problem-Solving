#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
	
    
    int l = 0;
    int h = s.size()-1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (s[l++] != s[h--])
        {
            
            return false;
        }
    }
    return true;
}
void solve()
{
	
	
		int n;
		cin>>n;
		string s;
		cin>>s;int cnt=0;
		
		if(palindrome(s))
		{
			
			for(int i=0;i<n;i++)
			{
				if(s[i]=='0')
				{
					cnt++;
				}
			}
			if(cnt>1&&n%2==1&&s[n/2]=='0')
			{
				cout<<"ALICE"<<endl;
			}
			else
			{
				cout<<"BOB"<<endl;

			}
			return;
			
		}
		
			if(cnt==2&&n%2==1&&s[n/2]=='0')
			{
				cout<<"DRAW"<<endl;
				return;
			}
			cout<<"ALICE"<<endl;
			
}


int  main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	solve();
	
		
	
}	