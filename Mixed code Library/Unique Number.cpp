#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> a;
        int sum = 0, last = 9;
        while (sum < x && last > 0)
        {
          a.push_back(min(x-sum,last));
          sum+=last;
          last--;
        }
        if(sum<x)
        {
            cout<<"-1\n";
        }
        else
        {
            reverse(a.begin(),a.end());
            for(int i=0;i<a.size();i++)
            {
                cout<<a[i];
            }
            cout<<endl;
        }
        
    }
}