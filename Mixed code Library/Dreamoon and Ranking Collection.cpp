#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,x,d=1;
        vector<int>a;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
        sort(a.begin(),a.end());
       while(x>0)
        {


            bool present=binary_search(a.begin(),a.end(),d);
            if(!present)
            {
                x=x-1;


            }
            d++;


        }

        cout<<d<<endl;
    }
}
