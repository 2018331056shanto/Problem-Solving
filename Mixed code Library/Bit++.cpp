#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=0,m=0;
    vector<char>s;
   for(int i=0;i<3*n;i++)
   {
       char c;
       cin>>c;
       s.push_back(c);
       if(c=='+')
       {
           p++;
       }
       if(c=='-')
       {
           m++;
       }
   
       
   }
  
  // cout<<p<<" "<<m<<endl;
   cout<<(p-m)/2<<endl;
}