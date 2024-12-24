#include<bits/stdc++.h>
using namespace std;
int tree[1000];
void creat_tree(int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        int x=i;
        while(x<=n)
        {
            tree[x]+=a[i];
            x+=x & -x;
        }
    }
}
 void update(int idx,int val,int n)
 {
     while (idx<=n)
     {
         tree[idx]+=val;
         idx+=idx&-idx;
     }
     
 }
long int query(int l,int r,int n)
{
    long int suml=0;
    long int sumr=0;
    if(l>n||l<1||r<1||r>n)
    {
        return 0;
    }
    else
    {
         while(l>0)
        {
           suml+=tree[l];
           l-=l & -l;
           //cout<<"hi"<<endl;
           //cout<<suml<<endl;
           //cout<<l<<endl;
        }
        while(r>0)
        {
            sumr+=tree[r];
            r-=r & -r;
            //cout<<"Hello"<<endl;
            //cout<<r<<endl;
        }
    }
    //cout<<sumr-suml<<endl;
    return sumr-suml;
}

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    creat_tree(a,n);
    int qt;
    cin>>qt;
    for(int i=0;i<qt;i++)
    {
        int l,r;
        cin>>l>>r;
        long int ans=query(l,r,n);
        cout<<ans<<endl;
    }
    int up;
    cin>>up;
    for(int i=0;i<up;i++)
    {
        int val;
        cin>>val;
        int idx;
        cin>>idx;
        update(idx,val,n);
    }
    int uqt;
    cin>>uqt;
    for(int i=0;i<uqt;i++)
    {
        int l,r;
        cin>>l>>r;
        long int ans=query(l,r,n);
        cout<<ans<<endl;
    }
   /* for(int i=1;i<=n;i++)
{
    cout<<tree[i]<<" ";
}*/
cout<<endl;
}