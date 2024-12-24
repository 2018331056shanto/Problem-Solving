#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         string s;
    cin>>s;
    int cnt=1;
    vector<int>q;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else
        {
            q.push_back(cnt);
            cnt=1;
        }
        
    }
     
      int le=q.size();
      int ans=0;
      for(int i=0;i<le;i++)
      {
          if(q[i]>1)
          {
              for(int j=0;j<n;j++)
              {

              }

          }
      }
     
   
    }
    

   
}