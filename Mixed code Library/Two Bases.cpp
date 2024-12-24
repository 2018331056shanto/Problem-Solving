#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b;
    cin>>n>>b;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int numberx=0;
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        numberx+=(a[i]*pow(b,j));
        j++;
        
    }
    int m,y;
    cin>>m>>y;
    int c[100];
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
    }
    long long int numbery=0;
    int k=0;
    for(int i=m-1;i>=0;i--)
    {
        numbery+=(c[i]*pow(y,k));
        k++;
        
    }
    if(numbery>numberx)
    {
        cout<<"<"<<endl;
    }
    else if(numbery<numberx)
    {
        cout<<">"<<endl;
    }
    else
    {
        cout<<"="<<endl;
    }
    
}