#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<pair<int,int>>s;
    s.insert({1,2});
    s.insert(make_pair(1,3));
    s.insert(make_pair(1,4));
    s.insert(make_pair(1,2));
    s.insert(make_pair(1,4));
    cout<<s.size()<<endl;
    for(auto &x:s)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
   }
        

        