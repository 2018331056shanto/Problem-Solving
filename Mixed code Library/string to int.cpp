#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[10];
    stringstream ss (s);
    int x=0;
    ss>>x;
    for(int i=s.size()-1;i>=0;i--)
    {
        a[i]=x%10;
        x/=10;
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<a[i];
    }
}