#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset<10000>can;
    int n,w;
    cin>>n>>w;
    can[0]=true;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        can=can|(can<<x);
     

    }
    puts(can[w]?"YES":"NO");
}