#include<bits/stdc++.h>
using namespace std;
int a[10000],bit[10000],n;
void update(int x,int delta)
{
    for(;x<=n;x+=x&-x)
    bit[x]+=delta;

}
int query(int x)
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
     update(l,x);
     update(r+1,-x);
     update(l,x*(l-1));
     update(r+1,-x*r);

 }
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        update(i,a[i]);

    }
    cout<<query(7)<<endl;
    range_update();
    cout<<query(7)<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<bit[i]<<" ";
    }
}