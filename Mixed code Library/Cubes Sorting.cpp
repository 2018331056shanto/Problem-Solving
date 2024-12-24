#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
           int c;
           cin>>c;
           a.push_back(c);

        }
       bool sorted=true;
       for(int i=0;i<n-1;i++)
       {
           if(a[i]<=a[i+1])
           {
               sorted=false;
               break;
           }

       }
       if(sorted)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }
       
    }
}