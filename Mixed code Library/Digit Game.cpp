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
        long long int n;
        cin>>n;
        string c;
        cin>>c;
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
            if(n%2==0)
            {
                if(i%2==1&&(c[i]-'0')%2==0)
                {
                    even=1;
                    break;
                }
                else
                {
                    continue;
                }
                

            }
            else
            {
                if(i%2==0&&(c[i]-'0')%2==1)
                {
                    odd=1;
                    break;

                }
                else
                {
                    continue;
                }
                
            }
            

        }
        if(n%2==0)
        {
             if(even)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
        }
        else
        {
            if(odd)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
        }
        
       
        
        

        
         
    }
}