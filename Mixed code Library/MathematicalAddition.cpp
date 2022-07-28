#include<bits/stdc++.h>
using namespace std;
int row[110],col[110];
int dp[110][110];
int visited[110][110];

int MCM(int beg,int ind)
{
    if(beg>=ind)
        return 0;
    if(visited[beg][ind])
        return dp[beg][ind];
    int ans=1<<30;
    for(int mid=beg;mid<ind;mid++)
    {
        int ansl=MCM(beg,mid);
        int ansr=MCM(mid+1,ind);
        int total=row[beg]*col[mid]*col[ind];
        int shit=ansl+ansr+total;
        ans=min(ans,shit);

    }
    dp[beg][ind]=ans;
    visited[beg][ind]=1;
    return ans;

}



int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>row[i]>>col[i];
    }
    cout<<MCM(0,n-1)<<endl;

}
	
	
