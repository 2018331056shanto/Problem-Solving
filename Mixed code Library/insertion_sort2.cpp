#include<bits/stdc++.h>
#define inf (1<<30)
#define sz 10000
using namespace std;
 int insertion_sort(int a[],int n )
 {
     int k,l;
     a[0]=-inf;
     for(k=1;k<n;k++)
     {
         for(l=k;l>=0;l--)
         {
             if(a[l-1]>a[l])
                swap(a[l-1],a[l]);
             else
                break;
         }
     }
 }
 int main()
 {
     int i,n,j,k;
     int a[sz];
     cin>>n;
     for(i=1;i<=n;i++)
     {
         cin>>a[i];
     }
     insertion_sort(a,n);
     for(j=1;j<=n;j++)
        cout<<a[j]<<" ";
     return 0;
 }
