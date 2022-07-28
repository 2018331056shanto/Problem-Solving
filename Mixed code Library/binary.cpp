#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int low,int high,int x)
{
    if(high>=low)
    {
        int mid;
        mid=low+(high-low)/2;
        if(a[mid]==x)
            return mid;
        if(mid>x)
             return binary(a,low,mid-1,x);
        if(mid<x)
            return binary(a,mid+1,high,x);
    }
    return -1;
}
int main()
{
    int n,x;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>x;
int result= binary(a,0,n-1,x);
if(result==-1)
    cout<<"DID NOT FOUND"<<endl;
else
    cout<<result<<endl;
return 0;
}

