#include<bits/stdc++.h>

using namespace std;

void solve() {
  
        int n;
        cin >> n;  

        vector<int> height(n);
        for (int i = 0; i < n; ++i) {
            cin >> height[i];  
        }
        
        vector<int> dp(n, -1); 

        dp[0] = 0;  
        
        stack<int> st; 
        st.push(0);  
        
        for (int i = 1; i < n; ++i) {


            while (!st.empty() && height[st.top()] < height[i]) {
                int top = st.top();
                st.pop();
                dp[i] = max(dp[i], dp[top] + 1);
            }
            
            if (dp[i] == -1) {
                dp[i] = 0;
            }
            
            st.push(i);
        }
        
        for (int i = 0; i < n; ++i) {
            cout << dp[i] << endl;
        }

}

int main() {

    int t;
    cin>>t;
    while(t--){
   
         solve();

    }

}
