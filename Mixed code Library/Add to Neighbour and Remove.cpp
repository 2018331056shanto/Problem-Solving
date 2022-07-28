#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>a;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin>>c;
            a.push_back(c);

        }
        for(int i=1;i<n;i++)
        {
            a[i]=a[i-1]+a[i];

        }
        for(int i=0)
    }
}