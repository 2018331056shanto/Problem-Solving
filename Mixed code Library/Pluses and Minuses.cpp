#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long int n=s.size();
        long int cur=0;
        long int br=0;
        long long int co=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='+')
            cur++;
            else
            {
                cur--;
            }
            if(cur<br)
            {
                co+=i+1;
                br=cur;

            }
            
        }
        cout<<co+n<<endl;
    }
}