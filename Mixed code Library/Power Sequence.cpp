#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long int>a;
    for(int i=0;i<n;i++)
    {
        long long int d;
        cin>>d;
        a.push_back(d);
    }
    sort(a.begin(),a.end());
    int c=1;
    while(pow(c,n-1)<=pow(10,10))
    {
        c++;
    }
    
    long long int mn=__LONG_LONG_MAX__;
    for(int i=1;i<c;i++)
    {
        long long int total=0;
        for(int j=0;j<n;j++)
        
            total+=abs(a[j]-pow(i,j));
        
        mn=min(total,mn);
    }
    cout<<mn<<endl;



}

