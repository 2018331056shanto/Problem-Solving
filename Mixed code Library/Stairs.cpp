#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
   
   
    while (t--)
    {
          long long int total=1;
    long long int square=1;
        int cnt=0;
        long long int x;
        cin>>x;
        long long int sum=0;
        
        while(sum<=x)
        {
            sum+=total*(total+1)/2;
           // cout<<sum<<endl;
            cnt++;
            square*=2;
            total+=square;
        }
        cout<<cnt-1<<endl;
    }
    
}