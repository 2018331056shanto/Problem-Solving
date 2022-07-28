#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n;
    int a[100000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=floor(log(n))+1;
    int sparse[n][k];
    for(int i=0;i<n;i++)
    {
        sparse[i][0]=i;
    }
    for(int j=1;2^j<n;j++)
    {
        for(int i=0;i+2^j-1<=n;i++)
        {
            if(a[sparse[i][j-1]]<a[sparse[i+2^j-1][j-1]])
            {
                sparse[i][j]=sparse[i][j-1];
            }
            else
            {
                sparse[i][j]=sparse[i+2^j][j-1];
            }
            //for range sum quaries sparse[i][j]=a[sparse[i][j-1]]+a[sparse[i+2^j-1][j-1]];
            
        }
    }
    int s,m;
   // cin>>s>>m;
    // query(s,m)
    {
        int l=m-s+1;
        int t=floor(log(l));
        return (a[sparse[s][t]],a[sparse[s+l-2^t][t]]);

    }
   
   /*range sum quaries
 {
     long long sum = 0;
for (int j = K; j >= 0; j--) {
    if ((1 << j) <= R - L + 1) {
        sum += st[L][j];
        L += 1 << j;
    }
}
 }
 */

    
}