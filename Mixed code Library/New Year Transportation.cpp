#include<bits/stdc++.h>
using namespace std;

int ar[30005];
int t,n,i,j;
int main(){
cin>>n>>t;
for(i=0;i<n-1;i++)
    cin>>ar[i];

j=0;
while(j<t)
 
{
 
   j=j+ar[j];
   if(j==t-1)
   {
       cout<<"YES"<<endl;return 0;
   }
}
cout<<"NO"<<endl;}