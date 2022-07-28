#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    std::vector<int> v;
  
    v.push_back(2);
    v.push_back(2);
    int x=upper_bound(v.begin(),v.end(),2)-v.begin();
    int y=lower_bound(v.begin(),v.end(),2)-v.begin();
    cout<<x-y<<endl;

}