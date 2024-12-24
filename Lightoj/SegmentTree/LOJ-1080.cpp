#include <bits/stdc++.h>
using namespace std;

int tree[4*1000005],lazy[4*1000005];

void build(vector<int>&v,int index,int left,int right)
{
    if(left==right)
    {
        tree[index]=v[left];
    }

    else
    {
        int mid=left+(right-left)/2;

        build(v,2*index,left,mid);
        build(v,2*index+1,mid+1,right);

        tree[index]=tree[2*index]^tree[2*index+1];
    }
}

void update(int index, int left, int right, int qleft, int qright, int val) {
    if (left > right || left > qright || right < qleft) {
        return;
    }

    if (lazy[index] != 0) {
        tree[index] ^= lazy[index];

        if (left != right) {
            lazy[2 * index] ^= lazy[index];
            lazy[2 * index + 1] ^= lazy[index];
        }
        lazy[index] = 0; 
    }

    if (qleft <= left && qright >= right) {
        tree[index] ^= val;

        if (left != right) {
            lazy[2 * index] ^= val; 
            lazy[2 * index + 1] ^= val; 
        }
        return;
    }

    int mid = left + (right - left) / 2;

    update(2 * index, left, mid, qleft, qright, val);
    update(2 * index + 1, mid + 1, right, qleft, qright, val);

    tree[index] = tree[2 * index] ^ tree[2 * index + 1]^lazy[index];
}

int getBit(int index,int left,int right,int qleft,int qright)
{
    if(left>right)
    {
        return 0;
    }

    if(lazy[index]!=0)
    {
        tree[index]^=lazy[index];
        if(left!=right)
        {
            lazy[2*index]^=lazy[index];
            lazy[2*index+1]^=lazy[index];
        }
        lazy[index]=1;
    }

    if(left>qright||right<qleft)
    {
        return 0;
    }

    if(qleft<=left&&qright>=right)
    {
        return tree[index];
    }

    int mid=left+(right-left)/2;
    if(qleft<=mid)
    {
        return getBit(2*index,left,mid,qleft,min(mid,qright));
    }
    else
    {
        return getBit(2*index+1,mid+1,right,max(mid+1,qleft),qright);
    }

    // return getBit(2*index,left,mid,qleft,min(mid,qright))^getBit(2*index+1,mid+1,right,max(mid+1,qleft),qright);


}


void basicIO() {
    
    
    string s;
    cin>>s;
    vector<int>v(s.length());
    
    for(int i=0;i<s.length();i++)
    {
        v[i]=s[i]-'0';
        // cout<<v[i]<<endl;
    }

    int n=s.length();
     memset(tree,0,sizeof(tree)/sizeof(tree[0]));
     memset(lazy,0,sizeof(lazy)/sizeof(lazy[0]));


    build(v,1,0,n-1);

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

            --x;
            --y;
            update(1,0,n-1,x,y,1);
        }
        else
        {
            int pos;
            cin>>pos;
            --pos;
            int x=getBit(1,0,n-1,pos,pos);
            cout<<x<<endl;
        }
    }


   


    
    
}

int main() {
    ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
            basicIO();
    }

    // Your cpp code here
    // return 0;
    
    
}
