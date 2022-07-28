#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int l,int h,int x)
{
    while(l<=h)
    {


    int mid=l+((h-l));
    if(a[mid]==x)
    {


        return mid+1;
    }
    else if(x>a[mid])
    {
        l=mid+1;
    }
    else if(x<a[mid])
    {
        h=mid-1;
    }

    }
    return -1;



}
int main()
{
    int n,x;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>x;
 int   d= binary(a,0,n-1,x);
 cout<<d<<endl;
}
