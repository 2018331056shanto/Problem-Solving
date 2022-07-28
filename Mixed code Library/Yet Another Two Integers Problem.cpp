#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        if(b<a)
        {
            swap(a,b);
        }
        long long int dif;
        dif=b-a;
        if(dif==0)
        {
            cout<<"0"<<endl;
        }
        else if(dif<=10)
        {
            cout<<"1"<<endl;
        }
        else
        {
            long long int ans;
            ans=dif/10;
            if(dif%10==0)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<ans+1<<endl;
            }
            
        }
    

    }
}