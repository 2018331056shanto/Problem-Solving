#include<bits/stdc++.h>
using namespace std;
int cnt=0;
 set<int> solve(int n)
{
    set<int>a;
    for(int i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            a.insert(i);
            //cout<<i<<" ";
            n/=i;
        }
    }
    return a;
}


int main()
{
    
    
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(solve(i).size()==2)
        {
            ans++;
        }
        
    }
    cout<<ans<<endl;

    
}