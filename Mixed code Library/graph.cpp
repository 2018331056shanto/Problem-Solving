#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n,m,u,v;
   cin>>u>>v;
   int k=v;
   int graph[u+10][v+10]={};
   while(v--)
   {
       cin>>n>>m;
       graph[n][m]=1;
       graph[m][n]=1;
   }
   for(int i=0;i<u;i++)
   {
        for(int j=0;j<u;j++)
       if(graph[i][j]==1)
        cout<<"There is a connection from "<<i<<" to "<<j<<endl;
   }

    return 0;
}

