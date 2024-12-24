#include<bits/stdc++.h>
using namespace std;
 long long int a[10000];
long long int  fiblist(int n)
{
   
    a[0]=0;
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
    long long int sum=0;
    cin>>n;
    long long int c=fiblist(n);
    for(int i=3;i<n;i+=3)
    {
      
         
        if(a[i]>4000000)
        {
            break;

        } 
         cout<<a[i]<<" "; 
         sum+=a[i];
      
        //cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<sum<<endl;
    
}