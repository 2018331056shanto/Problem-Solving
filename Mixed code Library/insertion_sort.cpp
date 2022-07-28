#include<bits/stdc++.h>
using namespace std;
int insertion_sort(int a[], int n)
{

    int i,j;
    a[0]=-5000;
    for(i=1;i<n;i++)
    {
        for(j=i; j>0;j--)
        {
            if(a[j-1]>a[j])
                swap(a[j-1],a[j]);
        }
    }


}
int main()
{
    int a[100];
    int n,i,l;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion_sort(a,n);
    for(i=1;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

