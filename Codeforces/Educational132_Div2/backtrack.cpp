
// // class Solution {
// //     public List<String> generateParenthesis(int n) {
// //         List<String> ans = new ArrayList();
// //         backtrack(ans, new StringBuilder(), 0, 0, n);
// //         return ans;
// //     }

// //     public void backtrack(List<String> ans, StringBuilder cur, int open, int close, int max){
// //         if (cur.length() == max * 2) {
// //             ans.add(cur.toString());
// //             return;
// //         }

// //         if (open < max) {
// //             cur.append("(");
// //             backtrack(ans, cur, open+1, close, max);
// //             cur.deleteCharAt(cur.length() - 1);
// //         }
// //         if (close < open) {
// //             cur.append(")");
// //             backtrack(ans, cur, open, close+1, max);
// //             cur.deleteCharAt(cur.length() - 1);
// //         }
// //     }
// // }




// // #include <bits/stdc++.h>
// // using namespace std;
// // void backtrack(vector<int>v,int i){
// // 	if(i==v.size()-1)
// // 	{
// // 		for(int j:v)
// // 		{
// // 			cout<<j<<" ";
// // 		}
// // 		cout<<endl;
// // 		return ;
// // 	}
// // 	for(int j=i;j<v.size();j++)
// // 	{
// // 		swap(v[i],v[j]);
// // 		backtrack(v,i+1);

// // 	}


// // }
// int main(){
// 	vector<int> v;
// 	for(int i = 1; i <= 5; i++) v.push_back(i);
// 		backtrack(v,0);
// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	vector<int>v;
// 	queue<vector<int>>q;
// 	q.push(v);
// 	while(!q.empty())
// 	{
// 		vector<int> fornt=q.front();
// 		q.pop();
// 		if(fornt.size()==5){
// 			for(int k=0;k<fornt.size();k++)
// 			{
// 				cout<<fornt[k]<<" ";
// 			}
// 			cout<<endl;
// 			continue;
// 		}
// 		for(int i=1;i<=5;i++)
// 		{
// 			bool flag=false;
// 			for(int j=0;j<fornt.size();j++)
// 			{
// 				if(fornt[j]==i)
// 					{
// 					flag=true;
// 				}

// 			}
// 			if(flag)
// 			{
// 				continue;
// 			}
// 			else
// 			{
// 				vector<int>rn=fornt;
// 				rn.push_back(i);
// 				q.push(rn);

// 			}
// 		}
// 	}	
	
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// // 	string s,temp;
// // 	cin>>s;
// // 	double n;
// // 	temp=s;
// // 	cin>>n;
// // 	double size=s.size();
// // 	int x=ceil(n/size);
// // 	// cout<<x<<endl;
// // 	for(int i=0;i<x-1;i++)
// // 	{
// // 		s+=temp;

// // 	}
// // 	int diff=s.size()-n;
// // 	// cout<<diff<<endl;
// // 	int cnt=0;
// // 	string ans=s.substr(0,s.size()-diff);	
// // 	for (int i = 0; i < ans.size(); ++i)
// // 	{
// // 		if(ans[i]=='a')
// // 		{
// // 			cnt++;
// // 		}		
// // 	}
// // 	cout<<cnt<<endl;

	
	
// // }
// #include <bits/stdc++.h>
// using namespace std;
 

// bool checkParanthesis(char c)
// {
//    if((c == '(') || (c == ')')){
//    	return true;
//    }
//    return false;
// }
 

// bool checkValidParanthesis(string str)
// {
//     int cnt = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == '(')
//             cnt++;
//         else if (str[i] == ')')
//             cnt--;
//         if (cnt < 0)
//             return false;
//     }
//     if(cnt == 0)
//     {
//     	return true;
//     }
//     else
//     {
//     	return false;
//     }
// }

// void  validPrenthesisFind(string expression)
// {
//     if (expression.empty())
//         return ;
 
//     unordered_set<string> visit;
 
//     queue<string> q;
//     string temp;
//     bool flag;

//     q.push(expression);
//     visit.insert(expression);
//     while (!q.empty())
//     {
//         expression= q.front(); 
//          q.pop();
//         if (checkValidParanthesis(expression))
//         {
//             cout << expression << endl;
 
           
//             flag = true;
//         }
//         // cout<<"hello"<<endl;
//         if (flag)
//             continue;
//         cout<<"motherfucker"<<endl;
//         for (int i = 0; i < expression.length(); i++)
//         {
//             if (!checkParanthesis(expression[i]))
//                 continue;
 
        
//             temp = expression.substr(0, i) + expression.substr(i + 1);
//             cout<<temp<<" "<<i<<endl;
//             cout<<visit.find(temp)==visit.end()<<endl;
//             if (visit.find(temp) == visit.end())
//             {
//                 q.push(temp);
//                 visit.insert(temp);
//             }
//         }

//     }
// }
 

// int main()
// {

//     string expression;
//     cin>>expression;
//     validPrenthesisFind(expression);
 
   
 
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	string s;
// 	cin>>s;

	
// }
//c++ program to print all the combinations of 


	

	
// #include<bits/stdc++.h>
// using namespace std;
// int revomalString(string s){
// 		stack<char>st;
// 		int cnt=0;
// 		for(char x:s)
// 		{
// 		  cnt++;
		
// 			char stTop;
// 			if(st.size()!=0)
// 			{
// 				stTop=st.top();
// 			}
			

// 			if(x=='(')
// 			{
// 				st.push('(');
// 			}
// 			if(x==')')
// 			{
// 			  if(st.size()==0)
// 			  {
// 			    st.push(')');
// 			    continue;
// 			  }

// 				if(stTop=='('){
// 				// 	cout<<stTop<<endl;
// 					st.pop();
// 				}
// 				else
// 				{
// 					st.push(')');
// 				}
// 			}
			

// 		}
// 		return st.size();
// 	}


// void generateCombinationOfParanthesis (string result, int open, int close, int expressionLength) {


//      if (open + close ==expressionLength) {
        
//         cout << result << endl;
//      } else {
//         if (open < expressionLength/2) {
//            generateCombinationOfParanthesis(result + "(", open + 1, close, expressionLength);
//         }
        
//         if (close < open) {
//            generateCombinationOfParanthesis(result + ")", open, close + 1, expressionLength);
//         }   
//      }   
// }

// int main() {

// 		string expression,result="";
// 		cin>>expression;


// 		int x=revomalString(expression);
// 		int expressionLength=expression.size()-x;

//         generateCombinationOfParanthesis (result, 0, 0,expressionLength);
   
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
    
// unordered_set<string> ans;


// void recurse(int index,string s,string curr,int left,int right,int pair){
//         if(index==s.length()){
//             if(left==0 and right==0 and pair==0){
//             	// cout<<curr<<endl;
//                 ans.insert(curr);
//             }
//             return;
//         }
//         if(left+right>s.length()-index){
//             return;
//         }
//         if(s[index]!='(' and s[index]!=')'){
//             recurse(index+1,s,curr+s[index],left,right,pair);
//         }
//         else if(s[index]=='('){
//             recurse(index+1,s,curr+s[index],left,right,pair+1);
//             if(left){
//                 recurse(index+1,s,curr,left-1,right,pair);
//             }
//         }
//         else{
//             if(pair>0){
//                 recurse(index+1,s,curr+s[index],left,right,pair-1);
//             }
//             if(right){
//                 recurse(index+1,s,curr,left,right-1,pair);
//             }
//         }
//     }
//     vector<string> removeInvalidParentheses(string s) {
//         int left = 0,right = 0;
//         for(auto& c:s){
//             if(c=='('){
//                 left++;
//             }
//             else if(c==')'){
//                 if(left){
//                     left--;
//                 }
//                 else{
//                     right++;
//                 }
//             }
//         }
//         recurse(0,s,"",left,right,0);
//         return vector<string>(ans.begin(),ans.end());
//     }

// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	string s;
// 	cin>>s;

// 	vector<string> combStr=removeInvalidParentheses(s);
// 	// cout<<combStr.size()<<endl;
// 	for(auto x:ans)
// 		cout<<x<<endl;
	
	
// }

    
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a,b;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for (int j=0;j<m;j++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }
    long  mn=*min_element(b.begin(),b.end());
    sort(a.begin(),a.end());
    long mx=*max_element(a.begin(),a.end());
    bool flag=true;
    for(int i=0;i<a.size();i++)
    {
        if(mx%a[i]==0)
        {
            continue;
        }
        else
        {
            flag=false;
        }
    }
    
    long maxFactor=1;
    for(int i=0;i<a.size();i++)
    {
        maxFactor*=a[i];
    }
    int cnt=0;
    if(flag){
        
        while(mx<=mn)
        {
           bool flag1=false;

            for(int i=0;i<b.size();i++)
            {
                if(b[i]%mx!=0)
                {
                    flag1=true;
                    break;
                }
            } 
            if(flag1)
                break;
            cnt++;
            mx*=2;
        }
    }
    else
    {
        while(maxFactor<=mn)
        {
           bool flag1=false;

            for(int i=0;i<b.size();i++)
            {
                if(b[i]%maxFactor!=0)
                {
                    flag1=true;
                    break;
                }
            } 
            if(flag1)
                break;
            cnt++;
            maxFactor*=2;
        }
    }
    
    
    cout<<cnt<<endl;
    // cout<<mn<<endl;
    
}