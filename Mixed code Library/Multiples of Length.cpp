#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int>a;
    for(int i=0;i<n;i++)
    {
        long long int b;
        cin>>b;
        a.push_back(b);
    }
    if(a.size()==1)
    {
        cout<<"1"<<" "<<"1"<<endl;
        cout<<"0"<<endl;
        cout<<"1"<<" "<<"1"<<endl;
        cout<<"0"<<endl;
        cout<<"1"<<" "<<"1"<<endl;
        cout<<-a[0]<<endl;
    }
    else
    {
        cout<<"1"<<" "<<n<<endl;
        for(int i=0;i<n-1;i++)
        {
            cout<<-a[i]*n<<" ";
        }
        cout<<"0"<<endl;
        cout<<"1"<<" "<<n-1<<endl;
        for(int i=0;i<n-1;i++)
        {
            cout<<a[i]*(n-1)<<" ";
        }
        cout<<endl;
        cout<<n<<" "<<n<<endl;
        cout<<-a[n-1]<<endl;

    }
}