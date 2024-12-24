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
        int n=s.size();
        int no1=0,no0=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                no0++;
            }
            else
            {
                no1++;
            }
            
            
        }
        int ans=min(no1,no0);
        int pno1=0,pno0=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                pno0++;
                no0--;
            }
            else
            {
                pno1++;
                no1--;
            }
            ans=min(ans,pno0+no1);
            ans=min(ans,pno1+no0);

            

        }
        cout<<ans<<endl;
    }
}