#include <bits/stdc++.h>
#define sz 300000
using namespace std;
int tree[sz];

void update(int ind, int lb, int ub, int pos, int val)
{
    if(pos < lb || pos > ub) return;
    if(lb==ub){
        if(lb == pos) tree[ind] = val;
        return;
    }
    int mid = (lb+ub)/2;
    if(pos<=mid) update((ind*2),lb,mid,pos,val);
    else update((ind*2)+1,mid+1,ub,pos,val);
    tree[ind] = min(tree[(ind*2)], tree[(ind*2)+1]);
}

int val=0;
int query(int ind, int lb, int ub, int qlb, int qub)
{
    if(qlb<=lb && ub <= qub) 
        { val=tree[ind];
            return tree[ind];
        }
    if(qub < lb || qlb > ub) return 0;
    int mid = (ub+lb)/2;
    int ret=0;
    int x= query(ind*2,lb, mid, qlb, qub);
     int y=query((ind*2)+1, mid+1, ub, qlb, qub);
    return val;
}
int main()
{
    int t;
    cin>>t;
    int cs=0;
    while(t--)
    {
        memset(tree,0,sizeof(tree));
        cout<<"Case "<<++cs<<":"<<endl;
    int n, q, x, y, k;

    cin>>n>>q;
    k = n;
    for (int i = 1; i<=n; i++)
    {
        cin >> x;
        update(1,1,n,i,x);
    }
    for (int i = 0; i<q; i++)
    {
        cin >> x >> y;
        //if(k==1)
            cout << query(1,1,n,x,y) << endl;
        //else
          //  update(1,0,n-1,x,y);
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<tree[i]<<" ";
    // }

 }
    return 0;
}
/**
5
7 3 10 2 1
7
1 0 4
2 2 4
1 0 4
1 1 4
1 0 3
2 0 17
1 0 0
*/
