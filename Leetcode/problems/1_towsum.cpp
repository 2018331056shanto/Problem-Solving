


// #include<bits/stdc++.h>
// using namespace std;


// void solve( vector<int>&nums,int target){
    

//         vector<pair<int,int>>ans;
//         unordered_map<int, int> visited;

//         int len = nums.size();
//         for (int i = 0; i < len; ++i) {
//             int n = nums[i];
//             int complement = target - n;
//             if (visited.count(complement)) {
//                 ans.push_back({visited[complement], i});
//             }
//             visited[n] = i;  
//         }
//         for(auto x:ans)
//         {
//             cout<<x.first<<" "<<x.second<<endl;
//         }
        
    

// }

// int32_t main()
//     {
//         ios_base::sync_with_stdio(false); cin.tie(NULL);
//         // int t;
//         // cin>>t;
//         // while(t--)
//         {
//             vector<int>nums;
//             nums.push_back(2);
//             nums.push_back(7);
//              nums.push_back(5);
//             nums.push_back(15);
//             // nums.push_back(4);
          
//             solve(nums,9);
//         }
//     }


#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
 
using namespace std;
 
int main() 
{
    vector<int> a,b;
    vector <int> c(3);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
     
    b.push_back(3);
    b.push_back(2);
    b.push_back(1);
 
    transform(a.begin(),a.end(),b.begin(),c.begin(),plus<int>());
    
    for(auto x:c)
    {
        cout<<x<<endl;
    }
    // copy(c.begin(),c.end(),iostream_iterator<int>(cout,"\n"));
     
    return 0; 
}