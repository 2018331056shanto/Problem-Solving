#include<bits/stdc++.h>
using namespace std;
void insertion(int a[],int n)
{
    for(int j=1;j<n;j++)
    {
        for(int k=j;k>0;k--)
        {
            if(a[k]>a[k-1])
            {
                swap(a[k],a[k-1]);
            }
        }
    }

}
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion(a,n);
    for(int l=0;l<n;l++)
    {
        cout<<a[l]<<" ";
    }
    return 0;
}
