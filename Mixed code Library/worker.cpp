#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset<1000>a[1000];
    int n,d;
    int m=0,l=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<d;j++)
        {
            int x;
            cin>>x;
            a[i][x]=true;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            m=(a[i]&a[j]).count();
            if(m>n)
            {
                l=m;
            }
        }
        
    }
    cout<<l<<endl;

}