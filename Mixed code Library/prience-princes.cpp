#include<bits/stdc++.h>
#define sz 1000
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        vector<int>a[sz];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            for(int j=0;j<p;j++)
            {
                int c;
                cin>>c;
                a[i].push_back(c);

            }
        }

        for(int k=0;k<n;k++)
        {
            for(int l=0;l<a[k].size();l++)
            {
                cout<<a[k][l]<<endl;
            }
        }
    }
}
