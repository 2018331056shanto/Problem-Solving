#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        int cnt1 = 1, cnt2 = 1;
        int k = w;
        int l = h;
        if (w % 2 == 0)
        {
            while (k % 2 == 0)
            {
                cnt1 *= 2;
                k /= 2;
            }
        }
        if (h % 2 == 0)
        {
            while (l % 2 == 0)
            {
                cnt2 *= 2;
                l /= 2;
            }
        }
        if (cnt1 * cnt2 >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}