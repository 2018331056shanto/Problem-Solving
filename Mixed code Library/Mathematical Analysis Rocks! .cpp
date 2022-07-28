#include<bits/stdc++.h>
#define sz 1000000
using namespace std;
long long int a[1000000]; 
 long long int b[1000000];
   long long int c[1000000];
int main()
{
    long long int n;
    cin>>n;
     
    for(long long int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
  
    for(long long  int i=1;i<=n;i++)
    {
        c[a[i]]=b[i];
    }
    for(long long int i=1;i<=n;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
}