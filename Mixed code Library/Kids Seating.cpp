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
        int cnt = 0;
        for (int i = 4 * n; i > 1; i -= 2)
        {

            if (cnt == n)
            {
                break;
            }
            cnt++;
            cout << i << " ";
        }
        cout << endl;
    }
}