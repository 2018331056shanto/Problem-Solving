#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,k;
    int a[3333];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n;j++)
    {
        int min=j;
        for(k=j+1;k<=n-1;k++)
        {
            if(a[k]<a[min])//accending,
                //if(a[k]>a[min]);
                min=k;

        }
 swap(a[min],a[j]);
    }
    for(int l=0;l<n;l++)
        cout<<a[l]<<" ";
    return 0;
}
