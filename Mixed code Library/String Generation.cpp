#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0;i<k;i++)
        {
            cout<<"a";
        }
        for(int i=0;i<n-k;i++)
        {
            if(i<n-k)
            {
                cout<<"c";
               i++;
            }
            else
            {
                break;
            }
            
            if(i<n-k)
            {
                cout<<"b";
                i++;
            }
            else
            {
                break;
            }
            
            if(i<n-k)
            {
                cout<<"a";
            }
            else
            {
                break;
            }
            
        }
        cout<<endl;

       


    }
}