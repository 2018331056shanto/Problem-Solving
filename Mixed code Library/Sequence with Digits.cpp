#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,g;
        unsigned long long sum=0;
        cin>>n>>k;
        vector<long long int>b;
        while(k--)
        {

            int c,d;
            vector<int>a;
            
            b.push_back(n);
                while(n>0)
            {
                int digit=n%10;
                n=n/10;
                a.push_back(digit);
            
            }
            
           /* for(int i=0;i<a.size();i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            */
           c=a[0];
           d=a[0];
           for(int i=0;i<a.size();i++)
           {
               c=min(c,a[i]);
               d=max(d,a[i]);
              
           }
           //cout<<c<<" "<<d<<endl;
           /*for(int i=0;i<a.size();i++)
           {
               cout<<a[i]<<" ";
           }
            cout<<endl;*/
            a.clear();
             g=c*d;
            
            b.push_back(c*d);
            /*for(int i=0;i<b.size();i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;*/
            
            
            sum=accumulate(b.begin(),b.end(),0);
            //cout<<sum<<endl;
            b.clear();
            n=sum;
            if(g==0)
            break;
           
           // cout<<c<<" "<<d<<endl;
            
            
         //   cout<<n<<endl;

        }
        
       
        cout<<sum-g<<endl;
      
    }
}