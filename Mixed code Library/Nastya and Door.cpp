#include<bits/stdc++.h>
using namespace std;
#define sz 100000
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a[sz],b[sz];
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=1;j<n;j++)
        {
            b[0]=0;
            if(a[j-1<a[j]&&a[j]>a[j+1]])
            {
                b[j]=1;
            }
            else
            {
                b[j]=0;
            }
            
        }
        int sum=0;
        for(int k=0;k<n;k++)
        {
            sum+=b[k];
            b[k]=sum;
        }
        int p=0;
        for(int l=1;l<n-k;l++)
        {
            



            
        }

    }
}