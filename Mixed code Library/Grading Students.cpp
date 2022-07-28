#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<38)
        {
            cout<<a<<endl;
        }
        else
        {
            if(5-a%5<3)
            {
                cout<<a+5-a%5<<endl;
            }
            else
            {
                cout<<a<<endl;
            }
            
        }
        
    }

}