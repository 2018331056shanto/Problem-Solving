
#include<bits/stdc++.h>
using namespace std;
int a[5100000];
int main()
{
   int n;
   cin>>n;
   long long int sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       sum+=a[i];
   }
   if(sum%3!=0)
   {
       cout<<"0"<<endl;
   }
   else
   {
       long long  int count2=0;
       long long  int count3=0;
       long  long int sel=0;
       for(int i=0;i<n-1;i++)
       {
           sel+=a[i];
           if(sel==(2*sum)/3)
           {
               count2+=count3;
           }
           if(sel==sum/3)
           {
               count3++;
           }
       }
       cout<<count2<<endl;
   }
   
   
    
}