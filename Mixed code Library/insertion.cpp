#include<bits/stdc++.h>
using namespace std;
void insertion(int a[],int n)
{
    int j,k,m,l;
        for(m=1;m<n;m++)
    {

        for(j=m;j>0;j--)
        {
            if(a[j-1]>a[j])
                swap(a[j-1],a[j]);

        }

    }
}
void print(int a[],int n)
{
    for(int l=0;l<n;l++)
        cout<<a[l]<<" ";
}
int main()
{
    int n,i,a[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    insertion(a,n);
    print(a,n);
    return 0;
}
