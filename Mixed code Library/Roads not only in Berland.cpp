#include<bits/stdc++.h>
using namespace std;
int n;
int parent[10000];
int r[10000];
void make_set()
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
        r[i]=1;
    }
}
int find_set(int node)
{
    if(node==parent[node]){
        return node;
    }
    else
    {
        return parent[node]=find_set(parent[node]);
    }
    
}
void union_set(int a,int b)
{
    int x=find_set(a);
    int y=find_set(b);
    if(x!=y)
    {
        if(r[x]<r[y])
        {
            swap(x,y);
        }
        parent[y]=x;
        if(r[x]==r[y])
        {
            ++r[x];
        }
    }
}
int main()
{
   cin>>n;
   make_set();
   for(int i=1;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       if(find_set(a)!=find_set(b))
       {
           union_set(a,b);
       }
   }
   for(int i=1;i<=n;i++)
   {
       cout<<parent[i]<<" ";
   }
    
}