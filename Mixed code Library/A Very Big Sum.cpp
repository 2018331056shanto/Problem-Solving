#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int sum=0,a;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum+=a;
    }
    cout<<sum<<endl;
   
}