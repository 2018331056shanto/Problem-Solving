#include<bits/stdc++.h>
using namespace std;
int main()
{
    double v[10000000];
    long long int n;
    int idx=0;
    while(scanf("%lld",n))
    {
        v[idx]=sqrt(n);
        ++idx;
    }
    for(int i=idx-1;i>=0;i--)
    {
        printf(".4lf\n",v[i]);
    }

     
}