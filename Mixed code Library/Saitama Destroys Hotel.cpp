#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
   
    cin>>n>>s;
    int mx=s;
    for(int i=0;i<n;i++)
    {
        int floor,time;
        cin>>floor>>time;
        mx=max(mx,time+floor);
       

    }
    
    //cout<<flag<<" "<<mx<<endl;
    cout<<mx<<endl;
}