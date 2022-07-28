#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        long long int root=sqrt(num);
        long double rootd=sqrt(num);
        if(root!=rootd)
        {
            
                cout<<"NO"<<endl;
        
            
        }
        else
        {
            if(root==1)
            {
                cout<<"NO"<<endl;
            }
            else if(root<=3)
            {

               cout<<"YES"<<endl;
               
            }
            else if(root%2==0||root%3==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                for(int i=5;i*i<=root;i+=6)
                {
                    if(root%i==0||root%(i+2)==0)
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
                cout<<"YES"<<endl;
            }
            
            
        }
        
       
    }


}