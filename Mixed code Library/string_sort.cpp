#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>a;
    string c;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        a.push_back(c);
    }
    sort(a.begin(),a.end());
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<endl;
    }
    auto e=upper_bound(a.begin(),a.end(),"shanto");
    auto d=lower_bound(a.begin(),a.end(),"shanto");
    cout<< e-a.begin() <<endl;
    cout<<d-a.begin()<<endl;

}