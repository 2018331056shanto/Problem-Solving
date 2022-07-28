#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long int >a;
    for(int i=0;i<=2;i++)
    {
        long int b;
        cin>>b;
        a.push_back(b);
    }   
    sort(a.begin(),a.end(),greater<>());
    if(a[0]%3==2&&a[1]%3==2&&(a[2]==2||a[2]==3))
    {
        int total=0;
        for(int i=0;i<2;i++)
        {
            total+=a[i]/3;
 
        }
        cout<<total+2<<endl;
    }
    else
    {
    
    long int r,g,b;
    r=a[0];
    g=a[1];
    b=a[2];
    long int mn=min(r,min(g,b));
    r=r-mn;
    g=g-mn;
    b=b-mn;
    
     long int total=mn+(r/3+g/3+b/3);
     cout<<total<<endl;
    
    
    
 
    }   
}