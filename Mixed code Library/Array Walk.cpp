#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,z;
        cin>>n>>k>>z;
        vector<int>a;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
        int mx=0;
        for(int i=0;i<k;i++)
        {
            mx=max(a[i]+a[i+1],mx);
            m.insert(make_pair(i+1,a[i]+a[i+1]));

        }
        map<int,int> :: iterator it;
        int idx=0;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second==mx)
            {
                idx=it->first;

            }
        }
        //cout<<idx<<endl;
       long long int sum=0;
       if(z==0||k==idx)
       {
           for(int i=0;i<=k;i++)
           {
               sum+=a[i];
           }
           cout<<sum<<endl;
       }
       else
       {
           for(int i=0;i<=idx;i++)
           {
              // cout<<a[i]<<" ";
               sum+=a[i];
           }
          // cout<<endl;
          if(z==1)
          {
              sum+=a[idx-1];
              if(idx+1<k)
              {
                  for(int i=idx;i<=k-(idx);i++)
                  {
                     // cout<<a[i]<<endl;
                      sum+=a[i];
                  }
                  cout<<sum<<endl;
              }
              else
              {
                  cout<<sum<<endl;
              }
              
          }
          else 
          {
              int l=idx;
              
              while(z>0&&l<k)
              {
                  //cout<<"y0"<<endl;
                 // cout<<a[idx-1]<<" ";
                  sum+=a[idx-1];
                  z--;
                  l++;
                 // cout<<a[idx]<<" ";
                  sum+=a[idx];
                  z--;
                  l++;
              }
              if(idx+z<k)
              {
                  if(z%2)
                  {
                      for(int i=idx;i<=k-(idx);i++)
                      {
                          //cout<<"bro"<<endl;
                         // cout<<a[i]<<" ";
                          sum+=a[i];
                      }
                      cout<<sum<<endl;

                  }
                  else
                  {
                      for(int i=idx+1;i<=k-(idx+1);i++)
                      {
                          //cout<<"no"<<endl;
                          //cout<<a[i]<<" ";
                          sum+=a[i];
                      }
                      cout<<sum<<endl;
                  }
                  
              }
              else
              {
                  cout<<sum<<endl;
              }
              
          }
           
       }
       
    }
}