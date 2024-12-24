#include<bits/stdc++.h>
using namespace std;
 unsigned long long  a[100000];
unsigned long long  fiblist(int n)
{
   
    a[0]=1;
    a[1]=1;
    for(int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    return a[n-1];
    
}
int main()
{
    int n;
    cin>>n;
    unsigned long long sum=0;
    unsigned long long  c=fiblist(n);
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int d=sum%10;
    int e=(d*d);
    if(e>10)
    {
        cout<<e%10<<endl;
    }
    else
    {
        cout<<e<<endl;
    }
    
  


}