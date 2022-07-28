#include<bits/stdc++.h>
using namespace std;
int parent[10000];
int r[10000];
int s[10000];
int n,m;
void make_set()
{
    for(int i=1;i<=n;++i)
    {
        parent[i]=i;
      //  r[i]=1;
       s[i]=1;
    }
}
int find_set(int node)
{
    if(node==parent[node])
    return node;
   // return find_set(parent[node]);
    return parent[node]=find_set(parent[node]);

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
       // cout<<parent[y]<<" "<<x;
 if(r[x]==r[y])
        {
            ++r[x];
        }
        
    }

} //     if(s[x]==s[y]) 
int main()
{
    cin>>n;
    int cnt=n;
    make_set();
    int a,b;
    for(int i=1;i<n;++i)
    {
        cin>>a>>b;
        if(find_set(a)!=find_set(b))
        {
            union_set(a,b);
            --cnt;

        }
         
        
    }
   //cout<<cnt<<endl;

   
   for(int i=1;i<=n;++i)
   {
       cout<<parent[i]<<" ";
   }
cout<<endl;
}

//disjoint set by rank