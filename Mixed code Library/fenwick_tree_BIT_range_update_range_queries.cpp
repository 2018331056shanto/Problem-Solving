#include<bits/stdc++.h>
using namespace std;
int bit[10000],bit1[10000],bit2[100000],n,a[10000];
void update(int bit[],int x,int delta)
{
    for(;x<=n;x+=x&-x)
    {
        bit[x]+=delta;
    }
}
int sum(int bit[],int x)
{
    int sum=0;
    for(;x>0;x-=x&-x)
    sum+=bit[x];
    return sum;

}
void range_update()
{
    int l,r,x;
    cin>>l>>r>>x;
    update(bit1,l,x);
    update(bit1,r+1,-x);
    update(bit2,l,x*(l-1));
    update(bit2,r+1,-x*r);
}
int prefix_sum(int x)
{
    return sum(bit1,x)*x-sum(bit2,x);
}
int range_sum()
{
    int l,r;
    cin>>l>>r;
    return prefix_sum(r)-prefix_sum(l-1);
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        update(bit,i,a[i]);
    }
    int idx;
    cin>>idx;
    cout<<sum(bit,idx)<<endl;
    range_update();
  cout<<  prefix_sum(idx)<<endl;
 cout<< range_sum()<<endl;
   
}