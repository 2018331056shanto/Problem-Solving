#include <bits/stdc++.h>
using namespace std;
int a[230000], b[230000];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = n; i > 0; i--)
        {
            int j = i + a[i];
            if (j > n)
            {
                b[i] = a[i];
            }
            else
            {
                b[i] = a[i] + b[j];
            }
        }
        int mx = 0;
        for (int i = 1; i <=n; i++)
        {
            // cout<<b[i]<<" ";
            mx = max(mx, b[i]);
        }
        //cout<<endl;
        cout << mx << endl;

        /* code */
    }
}