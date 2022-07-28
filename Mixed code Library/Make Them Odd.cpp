#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       set<int,greater<int> > a;
       int n;
       cin>>n;
       for(int i=0;i<n;i++)
       {
           int c;
           cin>>c;
           a.insert(c);
       }
       int cnt=0;
       while(!a.empty())
       {

       int m=*a.begin();
      // cout<<m<<endl;
       a.erase(m);
       if(m%2==0)
       {
           int b=m/2;
           cnt++;
           a.insert(b);
       }

      }
      cout<<cnt<<endl;
       

    


    }
    
}