#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,m,suma=0,sumb=0;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       long long int a;
       cin>>a;
       suma+=a;
   }
   for(int i=0;i<n;i++)
   {
       long long int b;
       cin>>b;
       sumb+=b;
   }
   for(int i=0;i<m;i++)
   {
      int x,y;
      cin>>x>>y;
   }
   if(suma-sumb==0)
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }
   
}