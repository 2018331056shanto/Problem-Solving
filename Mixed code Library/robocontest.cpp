#include<bits/stdc++.h>
#define sz 10000
using namespace std;
int main()
{
    int n,count1=0,count2=0;
    int a[sz],b[sz];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }
    for(int k=0;k<n;k++)
{
    if(a[k]==1&&a[k]!=b[k])
    {
        count1++;
    }
}
//cout<<count1<<endl;
    for(int l=0;l<n;l++)
{
    if(b[l]==1&&b[l]!=a[l])
    {
        count2++;
    }
}
//cout<<count2<<endl;
if(count1==0){
    cout<<"-1"<<endl;

}
else
    cout<<1+count2/count1<<endl;
}
