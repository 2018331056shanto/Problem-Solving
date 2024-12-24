#include<bits/stdc++.h>
using namespace std;
 long long int a[310000];
int main()
{
   
    int n;
    scanf("%d",&n);
    
    long long int sum=0;
    long long  ans=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
        

    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
       
        ans+=sum; 
        //cout<<ans<<endl;
        ans+=a[i];
        sum=sum-a[i];
       
        
    }
   printf("%lld\n",ans-a[n-1]);
    
    



}