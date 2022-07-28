#include<bits/stdc++.h>
using namespace std;
void selection(int a[],int n)
{

    for(int j=0;j<n-1;j++)
    {
        int mid=j;
        for(int k=j+1;k<n;k++)
        {

            if(a[k]<a[mid])
                mid=k;
            swap(a[mid],a[k]);
        }
    }
    for(int l=0;l<n;l++)
    {

        cout<<a[l]<<" ";
    }
}
int main()
{

    int a[10000];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
    selection(a,n);
    return 0;
}
