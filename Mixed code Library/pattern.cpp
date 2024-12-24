#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i%2)
            {
                cout<<"*";
            }
            else
            {
               if(j%2)
               {
                   cout<<"*";
               }
               else
               {
                   cout<<" ";
               }
               
            }
            
            
        }
        cout<<endl;
    }
}