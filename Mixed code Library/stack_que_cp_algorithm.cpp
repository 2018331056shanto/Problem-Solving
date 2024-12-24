 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int new_element=0;
    int min_e;
    stack< pair<pair<int,int>,int > >s;
    s.push({{1,2},4});
      s.push({{3,52},24});
        s.push({{33,25},24});
          s.push({{16,21},474});
            s.push({{125,234},4362});
              s.push({{1472,27245},7244});
                s.push({{11,34122},4251});
                  s.push({{2451,256},4742});
while(!s.empty())
{


     cout<<"(";
     cout<<s.top().first.first<<",";
     cout<<s.top().first.second<<" ";
     cout<<s.top().second<<")";
     s.pop(); 
    
     
}      
  
}