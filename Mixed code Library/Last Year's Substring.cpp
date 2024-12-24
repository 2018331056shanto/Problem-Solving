#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;

        bool y = false;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='2'&&s[i+1]=='0'&&s[i+2]=='2'&&s[i+3]=='0'&&(i+3==n-1||i==0))
            {
                y=true;
                break;
            }
            if (s[i] == '2'&&i==0)
            {
                for (int j = i + 1; j < s.size(); j++)
                {
                    if (s[j] == '0' && s[j + 1] == '2' && s[j + 2] == '0'&&j+2==n-1)
                    {
                        //cout<<j+2<<endl;
                        //cout << "YES" << endl;
                        y = true;
                        break;
                    }
                }
                if (y)
                {
                    break;
                }
            }
            if (s[i] == '2' && s[i + 1] == '0'&&i==0)
            {
                for (int j = i + 1; j < s.size(); j++)
                {
                    if (s[j] == '2' && s[j + 1] == '0'&&j+1==n-1)
                    {
                       // cout<<j+1<<endl;
                        //  cout<<"YES"<<endl;
                        y = true;
                        break;
                    }
                }
                if (y)
                {
                    break;
                }
            }
            if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2'&&i==0)
            {
                for (int j = i + 1; j < s.size(); j++)
                {
                    if (s[j] == '0'&&j==n-1)
                    {
                        // cout<<"YES"<<endl;
                        y = true;
                        break;
                    }
                }
                if (y)
                {
                    break;
                }
            }
        }
        if (y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}