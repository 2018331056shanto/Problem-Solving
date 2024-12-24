#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long int n,c;
long long int a=1,b=1,d=1;
cin>>n>>c;
for(int i=1;i<=n;i++)
{
a*=i;
}
for(int i=1;i<=(n-c);i++)
{
b*=i;
}
for(int i=1;i<=c;i++)
{
    d*=i;
}
cout<<a/(b*d)<<endl;
}
}