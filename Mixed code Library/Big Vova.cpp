#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
       int n;
       cin>>n;
       vector<pair<int,int>>p;
       vector<int>a;
       int mx=0;
       for(int i=0;i<n;i++)
       {
           int b;
           cin>>b;
           mx=max(mx,b);
           a.push_back(b);
       }
       for(int i=0;i<n;i++)
       {
           int c=__gcd(mx,a[i]);
           p.push_back(make_pair(c,a[i]));

       }
       sort(p.begin(),p.end(),greater<>());
       for(int i=0;i<n;i++)
       {
           cout<<p[i].first<<" ";
           
       }
       cout<<endl;
       for(int i=0;i<n;i++)
       {
           cout<<p[i].second<<" ";
       }
       cout<<endl;

       

   }
   

}
