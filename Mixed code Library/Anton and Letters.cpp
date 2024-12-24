#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>a;
    char b;
    while(1)
    {
        cin>>b;
        if(b=='{'||b==',')
        continue;
        else if(b=='}')
        break;
        else
        {
            a.insert(b);
        }
        
        
        
    }
    
        cout<<a.size()<<endl;
    
    
    
    
}