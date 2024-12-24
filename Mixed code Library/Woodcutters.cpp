#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a,b;
    for(int i=0;i<n;i++)
    {
        int x,h;
        cin>>x>>h;
        a.push_back(x);
        b.push_back(h);

    }
    int cnt=2;
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        for(int i=1;i<n-1;i++)
    {
        
         if(a[i]-b[i]>a[i-1] )
        {
            
            cnt++;
        }
        else if(a[i]+b[i]<a[i+1])
        {
           a[i]+=b[i];
            cnt++;
        }
         
    }
    cout<<cnt<<endl;
    }
    
    
}

