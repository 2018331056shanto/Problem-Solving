#include<bits/stdc++.h>
using namespace std;
int BIT[1000], a[1000], n;
void update(int x, int delta)
{
      for(; x <= n; x += x&-x)
        BIT[x] += delta;
}
int query(int x)
{
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += BIT[x];
     return sum;
}

int main()
{
     cin>>n;
     int i;
     for(i = 1; i <= n; i++)
     {
           cin>>a[i];
           update(i, a[i]);
     }
     update(8,(8-BIT[8]));
     for(int i=0;i<n;i++)
     {
         cout<<BIT[i]<<" ";
     }
     cout<<endl;
    cout<<query(10)<<endl;
     cout<< query(7)-query(2-1)<<endl;
     return 0;
}