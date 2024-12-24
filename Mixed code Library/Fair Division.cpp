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
        int odd = 0;
        int even = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (x % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even==n&&n%2==1||odd%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
}