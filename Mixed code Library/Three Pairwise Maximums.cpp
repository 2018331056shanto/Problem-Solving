#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a;
        for(int i=0;i<3;i++)
        {
            long long int c;
            cin>>c;
            a.push_back(c);
        }
        sort(a.begin(),a.end());
        if(a[1]!=a[2])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
        }
        
       
        

       

    }
}