#include<bits/stdc++.h>
using namespace std;

int tree[4*1000000];


void build(int index,int left,int right,string &s)
{
    if(left==right)
    {
        tree[index]=(s[left-1]-'0');
        return;
    }
   
        int mid=left+(right-left)/2;

        build(2*index,left,mid,s);
        build(2*index+1,mid+1,right,s);
    
}


void update(int index,int left,int right,int qleft,int qright)
{
   
   if(qright<left || qleft>right)
   {
        return ;
   }

   if(qleft<=left&&qright>=right)
   {
        tree[index]^=1;
        return;
   }

   int mid=left+(right-left)/2;

   update(2*index,left,mid,qleft,qright);
   update(2*index+1,mid+1,right,qleft,qright);

}

int getBit(int index,int left,int right,int pos)
{
    if(pos<left||pos>right)
    {
        return 0;
    }

    if(left==right)
    {
        return tree[index];
    }

    int mid=left+(right-left)/2;

    if(pos<=mid)
    {
        return tree[index]^getBit(2*index,left,mid,pos);
    }

    else
    {
        return tree[index]^getBit(2*index+1,mid+1,right,pos);
    }
}

void solve(){
    
    string s;
    cin>>s;

    int n=s.length();
    memset(tree,0,sizeof(tree)/sizeof(tree[0]));
    build(1,1,n,s);
    int q;
    cin>>q;

    while(q--)
    {
        string s;
        cin>>s;

        if(s=="I")
        {
            int x,y;
            cin>>x>>y;

            update(1,1,n,x,y);
        }
        else
        {
            int pos;
            cin>>pos;
            int x=getBit(1,1,n,pos);

            cout<<x<<endl;
        }
    }


}

int32_t main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        int t;
        cin>>t;
        for(int i=1;i<=t;i++)
        {
            cout<<"Case "<<i<<":"<<endl;
            solve();
        }
    }
