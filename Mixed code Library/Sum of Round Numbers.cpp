#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int co=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]=='0')
            {
                co++;
            }
        }
        cout<<n.size()-co<<endl;
        
        for(int i=0;i<n.size();i++)
        {
            

            if(n[i]!='0')
            {
                
                co++;
                cout<<n[i];
                for(int j=0;j<n.size()-i-1;j++)
                {
                    cout<<"0";
                    
                }
                cout<<" ";
            }
            
            
        }
        cout<<endl;
        
    }
}