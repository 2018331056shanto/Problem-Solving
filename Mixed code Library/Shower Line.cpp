#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    int p[10];
    for(int i=0;i<5;i++)
    {
        p[i]=i;

    }
    int ans=0;
    int mx=0;
    int cnt=0;
    while(next_permutation(p,p+5))
    {
    ans=a[p[0]][p[1]]+a[p[1]][p[0]]+a[p[2]][p[3]]+a[p[3]][p[2]]
    +a[p[1]][p[2]]+a[p[2]][p[1]]+a[p[3]][p[4]]+a[p[4]][p[3]]
    +a[p[2]][p[3]]+a[p[3]][p[2]]
    +a[p[3]][p[4]]+a[p[4]][p[3]];
    mx=max(ans,mx);
    //cout<<mx<<endl;
    }
    ans=a[0][1]+a[1][0]+a[2][3]+a[3][2]
    +a[1][2]+a[2][1]+a[3][4]+a[4][3]
    +a[2][3]+a[3][2]
    +a[3][4]+a[4][3];
    mx=max(ans,mx);
    cout<<mx<<endl;
    
}