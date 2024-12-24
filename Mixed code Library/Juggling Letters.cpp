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
        set<char>s;
        string st;
        for(int i=0;i<n;i++)
        {
            string p;
            cin>>p;
            st.append(p);

        }
       for(int i=0;i<st.size();i++)
       {
           s.insert(st[i]);
       }
       int cnt=0;
       vector<int>a;
      for(const auto &it : s)
      {
          for(int j=0;j<st.size();j++)
          {
              if(it==st[j])
              {
                  cnt++;
              }
          }
          a.push_back(cnt);
          cnt=0;
      }
      int flag=0;
      for(int i=0;i<a.size();i++)
      {
         if(a[i]%n!=0)
         {
             flag=1;
         }
      }
      if(flag)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
      }
      



    }
   
}