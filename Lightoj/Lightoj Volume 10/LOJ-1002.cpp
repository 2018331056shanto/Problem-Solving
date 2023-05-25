// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;


// // // // // // // // void solve(){
	
// // // // // // // // 	long long n,x,y;
// // // // // // // // 	cin>>n>>x;
// // // // // // // // 	y=x;
// // // // // // // // 	--y;
// // // // // // // // 	long long div=n/x;
// // // // // // // // 	long long remain=n-(div*x);
// // // // // // // // 	long long sum=(div*(y*(y+1))/2)+(remain*(remain+1)/2);
// // // // // // // // 	cout<<sum<<endl;
// // // // // // // // }

// // // // // // // // int32_t main()
// // // // // // // // 	{
// // // // // // // // 		ios_base::sync_with_stdio(false); cin.tie(NULL);
// // // // // // // // 		int t;
// // // // // // // // 		cin>>t;
// // // // // // // // 		while(t--)
// // // // // // // // 		{
// // // // // // // // 			solve();
// // // // // // // // 		}
// // // // // // // // 	}


// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;

// // // // // // // // string decodeString(string s,int key){

// // // // // // // // for(int i=0;i<s.length();i++){

// // // // // // // // 	s[i]=(s[i]-'a'-key+26)%26 +'a';
// // // // // // // // }
// // // // // // // // return s;
// // // // // // // // }

// // // // // // // // void solve(){
	
// // // // // // // // 	string s;
// // // // // // // // 	cin>>s;

// // // // // // // // 	for(int i=1;i<=26;i++){

// // // // // // // // 		cout<<"key :"<<i<<" "<<"Decoded String: "<<decodeString(s,i);
// // // // // // // // 	}

// // // // // // // // }

// // // // // // // // int32_t main()
// // // // // // // // 	{
// // // // // // // // 		ios_base::sync_with_stdio(false); cin.tie(NULL);
// // // // // // // // 		int t;
// // // // // // // // 		// cin>>t;
// // // // // // // // 		// while(t--)
// // // // // // // // 		{
// // // // // // // // 			solve();
// // // // // // // // 		}
// // // // // // // // 	}

// // // // // // // #include<bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // bool cmp(pair<char,double>x,pair<char,double>y){

// // // // // // //     return x.second>=y.second;
// // // // // // // }
// // // // // // // int main(){

// // // // // // //     map<char,double>freqOfEnglish;

// // // // // // //     freqOfEnglish={
// // // // // // //         {'a', 8.05},
// // // // // // //         {'b', 1.67},
// // // // // // //         {'c', 2.23},
// // // // // // //         {'d', 5.1},
// // // // // // //         {'e', 12.22},
// // // // // // //         {'f', 2.14},
// // // // // // //         {'g', 2.3},
// // // // // // //         {'h', 6.62},
// // // // // // //         {'i', 6.28},
// // // // // // //         {'j', 0.19},
// // // // // // //         {'k', 0.95},
// // // // // // //         {'l', 4.08},
// // // // // // //         {'m', 2.33},
// // // // // // //         {'n', 6.95},
// // // // // // //         {'o', 7.63},
// // // // // // //         {'p', 1.66},
// // // // // // //         {'q', 0.06},
// // // // // // //         {'r', 5.29},
// // // // // // //         {'s', 6.02},
// // // // // // //         {'t', 9.67},
// // // // // // //         {'u', 2.92},
// // // // // // //         {'v', 0.82},
// // // // // // //         {'w', 2.6},
// // // // // // //         {'x', 0.11},
// // // // // // //         {'y', 2.04},
// // // // // // //         {'z', 0.06}
// // // // // // //     };


// // // // // // //     string cipher;
// // // // // // //     map<char,double>freqGivenText;
// // // // // // //     vector<string>cipherArr;
// // // // // // // int cnt=0;
// // // // // // //     while(getline(cin,cipher)){

// // // // // // //         // cout<<cipher<<endl;
// // // // // // //         for(int i=0;i<cipher.length();i++){

// // // // // // //             if((cipher[i]>='a'&&cipher[i]<='z')||(cipher[i]>='A'&&cipher[i]<='Z'))
            
// // // // // // //             {
// // // // // // //                 cnt++;
// // // // // // //                 freqGivenText[tolower(cipher[i])]++;
// // // // // // //                 // cout<<freqGivenText[tolower(cipher[i])]<<endl;;
// // // // // // //             }

// // // // // // //         }
// // // // // // //         cipherArr.push_back(cipher);
// // // // // // //     }


// // // // // // //     vector<pair<char,double>>freqEng,freqCipher;

// // // // // // //     for(auto x:freqOfEnglish){

// // // // // // //         freqEng.push_back({x.first,x.second});
// // // // // // //     }
// // // // // // //     for(auto x:freqGivenText){
// // // // // // //         // cout<<x.first<<" "<<x.second<<endl;
// // // // // // //         freqCipher.push_back({x.first,(x.second*100)/cnt});
// // // // // // //     }

// // // // // // //     sort(freqEng.begin(),freqEng.end(),cmp);
// // // // // // //     sort(freqCipher.begin(),freqCipher.end(),cmp);


// // // // // // //     for(auto x:freqCipher){

// // // // // // //         cout<<x.first<<" "<<x.second<<endl;
// // // // // // //     }
// // // // // // //     cout<<"===================================="<<endl;
// // // // // // //       for(auto x:freqEng){

// // // // // // //         cout<<x.first<<" "<<x.second<<endl;
// // // // // // //     }

// // // // // // //     map<char,char>sub={

// // // // // // //         {'t','e'},
// // // // // // //         {'m','t'},
// // // // // // //         {'n','a'},
// // // // // // //         {'i','h'},
// // // // // // //         {'j','s'},
// // // // // // //         {'f','n'},
// // // // // // //         {'g','o'},
// // // // // // //         {'k','r'},
// // // // // // //         {'z','d'},
// // // // // // //         {'o','i'},
// // // // // // //         {'y','f'},
// // // // // // //         {'d','l'},
// // // // // // //         {'r','b'},
// // // // // // //         {'x','v'},
// // // // // // //         {'s','m'},
// // // // // // //         {'e','c'},
// // // // // // //         {'w','u'},
// // // // // // //         {'b','y'},
// // // // // // //         {'u','g'},
// // // // // // //         {'c','w'},
// // // // // // //         {'q','k'},
// // // // // // //         {'h','p'},
// // // // // // //         {'p','j'}
// // // // // // //         // {'f','o'},
// // // // // // //         // {'i','n'},
// // // // // // //         // {'g','h'},
// // // // // // //         // {'k','i'},
// // // // // // //         // {'z','s'},
// // // // // // //         // {'o','r'},
// // // // // // //         // {'d','d'},
// // // // // // //         // {'j','l'},
// // // // // // //         // {'c','u'},
// // // // // // //         // {'y','w'},
// // // // // // //         // {'e','m'},
// // // // // // //         // {'s','g'},
// // // // // // //         // {'w','c'},
// // // // // // //         // {'h','f'},
// // // // // // //         // {'b','y'},
// // // // // // //         // {'r','b'},
// // // // // // //         // {'q','p'},
// // // // // // //         // {'x','k'},
// // // // // // //         // {'u','v'},
// // // // // // //         // {'p','j'}

// // // // // // //     };

// // // // // // //     for(int i=0;i<cipherArr.size();i++){

// // // // // // //         string xx=cipherArr[i];
// // // // // // //         // cout<<xx<<endl;
// // // // // // //         // cout<<"-====================="<<endl;
// // // // // // //         for(int j=0;j<xx.length();j++){

// // // // // // //             char c=char(xx[j]+32);
// // // // // // //             // cout<<c<<endl;
// // // // // // //             // cout<<"88888"<<endl;
// // // // // // //             if(sub.find(c)!=sub.end()){
// // // // // // //                 // cout<<c<<" "<<sub[c]<<endl;
// // // // // // //                 // cout<<"hels"<<" "<<c<<endl;
// // // // // // //                 xx[j]=sub[c];
// // // // // // //             }
// // // // // // //         }
// // // // // // //         cout<<xx<<endl;
// // // // // // //         cout<<"==============================="<<endl;
// // // // // // //     }

// // // // // // // }



// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;


// // // // // // void solve(){
    
// // // // // //     int nums[]={1,2,3,0,0,0,0,0,0,1,0,-10};
// // // // // //      vector<int>consecutiveZero;
// // // // // //         vector<long long >cumsum(1e5,0);
// // // // // //         cumsum[0]=0;
// // // // // //         for(int i=1;i<100000;i++)
// // // // // //         {
// // // // // //             cumsum[i]=cumsum[i-1]+i;
// // // // // //         }
// // // // // //         int cnt=0;
// // // // // //         for(int i=0;i<12-1;i++)
// // // // // //         {
// // // // // //             if(nums[i]==0&&nums[i+1]==0)
// // // // // //             {
// // // // // //                 cnt++;
// // // // // //             }
// // // // // //             else
// // // // // //             {
// // // // // //                 cout<<"hello"<<endl;
// // // // // //                 if(nums[i]==0)
// // // // // //                 {
// // // // // //                     consecutiveZero.push_back(cnt+1);
// // // // // //                 }
                
// // // // // //                 cnt=0;
// // // // // //             }
// // // // // //         }
// // // // // //         for(auto x:consecutiveZero)
// // // // // //         {
// // // // // //             cout<<x<<endl;
// // // // // //         }


// // // // // // }

// // // // // // int32_t main()
// // // // // //     {
// // // // // //         ios_base::sync_with_stdio(false); cin.tie(NULL);
// // // // // //         int t;
// // // // // //         // cin>>t;
// // // // // //         // while(t--)
// // // // // //         {
// // // // // //             solve();
// // // // // //         }
// // // // // //     }



// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;

// // // // // vector<bool>vis;
// // // // // vector<int>col;
// // // // // vector<vector<int>>v;
// // // // // bool bipartite;

// // // // // void color(int u,int curr)
// // // // // {
// // // // //     if(col[u]!=-1 and col[u]!=curr)
// // // // //     {
// // // // //         cout<<"hello"<<endl;
// // // // //         bipartite=false;
// // // // //         return;
// // // // //     }
// // // // //     col[u]=curr; 
// // // // //     if(vis[u])
// // // // //         return;
// // // // //     vis[u]=true;

// // // // //     for(int x:v[u])
// // // // //     {
// // // // //         color(x, curr xor 1);
// // // // //     }
// // // // // }
// // // // // void solve(){
// // // // //     int n,e;
// // // // //     cin>>n>>e;
// // // // //    v=vector<vector<int>>(n+1);
// // // // //     for(int i=0;i<e;i++)
// // // // //     {
// // // // //         int x,y;
// // // // //         cin>>x>>y;
// // // // //         v[x].push_back(y);
// // // // //         v[y].push_back(x);

// // // // //     }
// // // // //     vis=vector<bool>(n,false);
// // // // //     col=vector<int>(n,-1);
// // // // //     for(int i=0;i<n;i++)
// // // // //     {
// // // // //         if(!vis[i])
// // // // //         {
// // // // //             color(i,0);
// // // // //         }
// // // // //     }
// // // // //     if(bipartite)
// // // // //     {
// // // // //         cout<<"bipartite"<<endl;
// // // // //     }
// // // // //     else
// // // // //     {
// // // // //         cout<<"not bipartite"<<endl;
// // // // //     }
    

// // // // // }

// // // // // int32_t main()
// // // // //     {
// // // // //         ios_base::sync_with_stdio(false); cin.tie(NULL);
// // // // //         int t;
// // // // //         // cin>>t;
// // // // //         // while(t--)
// // // // //         {
// // // // //             solve();
// // // // //         }
// // // // //     }

// // // // #include<bits/stdc++.h>
// // // // using namespace std;


// // // // void solve(){
    
// // // //     string s="";
// // // //     cout<<s.length();

// // // // }

// // // // int32_t main()
// // // //     {
// // // //         ios_base::sync_with_stdio(false); cin.tie(NULL);
// // // //         int t;
// // // //         // cin>>t;
// // // //         // while(t--)
// // // //         {
// // // //             solve();
// // // //         }
// // // //     }

// // // #include<bits/stdc++.h>
// // // using namespace std;


// // // string reverseStr(string str)
// // // {
// // //     int n = str.length();
 
// // //     // Swap character starting from two
// // //     // corners
// // //     for (int i = 0; i < n / 2; i++)
// // //         swap(str[i], str[n - i - 1]);
// // //         return str;
// // // }
// // //     string longestPalindrome(string s) {
        
// // //         map<string,pair<pair<int,int>,int>>mp;
// // //         int mx=0;
// // //         if(s==reverseStr(s))
// // //         {
// // //           return s;
// // //         }
// // //         string prefix="";
// // //         for(int i=0;i<s.length();i++)
// // //         {
// // //             prefix+=s[i];
// // //             // mp[prefix]=s.length();
// // //             string x=prefix;
// // //             for(int j=0;j<prefix.length();j++)
// // //             {
// // //               x=prefix.substr(j,prefix.length()-j);
// // //               // cout<<i<<" "<<j<<endl;
// // //              mp.insert({x,{{j,prefix.length()-j},x.length()}});
// // //             }
// // //             // cout<<"prefix :"<<prefix<<endl;
           
// // //         }

// // //         for(auto x:mp)
// // //         {
// // //             cout<<x.first<<" "<<x.second.first.first<<" "<<x.second.first.second<<" "<<x.second.second<<endl;
// // //         }
// // //         string suffix="";
// // //         string ans="";
// // //         for(int i=s.length()-1;i>=0;i--)
// // //         {
// // //             suffix+=s[i];
// // //             string x=suffix;
// // //             // cout<<"suffix :"<<suffix<<endl;
// // //             for(int j=0;j<suffix.length();j++)
// // //             {
// // //               x=suffix.substr(j,suffix.length()-j);
// // //               // cout<<"it's x :"<<x<<endl;


// // //                 if(mp.find(x)!=mp.end())
// // //                 {
// // //                     int len=suffix.length()-j;
// // //                     cout<<x<<" "<<s.length()-j-x.length()<<" "<<s.length()-j-1<<endl;
// // //                   // cout<<"hello :"<<x<<endl;
// // //                     if(mp[x].first.first==s.length()-j-x.length()&&mp[x].first.second==x.length())
// // //                     {
// // //                         if(mx<mp[x].second)
// // //                     {
// // //                         // cout<<"string : "<<x<<" "<<mp[x]<<endl;

// // //                         ans=x;
                   
// // //                         mx=mp[x].second;
// // //                     }
// // //                     }
                    
                
// // //                 }


// // //             }
// // //         }
// // //         // cout<<mx<<endl;
// // //         // cout<<suffix<<" "<<mx<<endl;
// // //         return ans;
        
// // //     }



// // //     int main()
// // //     {
// // //         string s;
// // //         cin>>s;
// // //         cout<<longestPalindrome(s)<<endl;

// // //     }
// // #include<bits/stdc++.h>
// // using namespace std;


// // void solve(){
    

// // map<int,int>x;
// // cout<<x[2]<<endl;
// // }

// // int32_t main()
// //     {
// //         ios_base::sync_with_stdio(false); cin.tie(NULL);
// //         int t;
// //         // cin>>t;
// //         // while(t--)
// //         {
// //             solve();
// //         }
// //     }



// #include<bits/stdc++.h>
// using namespace std;

// int sz[100];
// int parent[100];
// void make_set(int x)
// {
//     parent[x]=x;
//     sz[x]=1;

// }
// int find_set(int x)
// {
 
//     if(x==parent[x])
//     {
//         return x;
//     }   

//     return parent[x]=find_set(parent[x]);
// }
// void union_set(int a,int b)
// {
//     a=find_set(a);
//     b=find_set(b);
//     if(a!=b)
//     {
//         if(sz[a]<sz[b])
//         {
//             swap(a,b);
//         }
//         parent[b]=a;
//         sz[a]+=sz[b];
//     }
// }

// void solve(){
    
//     for(int i=1;i<=6;i++)
//     {
//         int x;
//         cin>>x;
//         make_set(x);
//     }
//     union_set(2,5);

// }


// int32_t main()
//     {
//         ios_base::sync_with_stdio(false); cin.tie(NULL);
//         int t;
//         // cin>>t;
//         // while(t--)
//         {
//             solve();
//         }
//     }

#include<bits/stdc++.h>
using namespace std;

void dfs1(int x,vector<vector<int>>&v,vector<int>&start,vector<int>&end,stack<int>&st,vector<int>&vis,int &it)
{
    vis[x]=1;
    start[x]=it;
    cout<<"start :"<< x<<" "<<start[x]<<endl;
    it++;

    for(int i=0;i<v[x].size();i++)
    {
        if(!vis[v[x][i]])
        {
            dfs1(v[x][i],v,start,end,st,vis,it);                   

        }       
                    
    }
    end[x]=it;
     it++;
            cout<<"end :"<<x<<" "<<end[x]<<endl;
            st.push(x);

}
int  dfs(int x,vector<vector<int>>&vt,vector<int>&vis1,int &idx)
{
    vis1[x]=1;
    idx++;
    for(int i=0;i<vt[x].size();i++)
    {
        if(!vis1[vt[x][i]])
        {
            dfs(vt[x][i],vt,vis1,idx);
        }
    }
    return idx;
   
}

void solve(){
    
    int n,e;
    cin>>n>>e;
    vector<vector<int>>v(n+1);
    vector<vector<int>>vt(n+1);
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        vt[y].push_back(x);
    }

    vector<int>start(n+1,0);
    vector<int>end(n+1,0);
    stack<int>st;
    vector<int>vis(n+1);
    int it=1;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs1(i,v,start,end,st,vis,it);
        }   
    }
  
  vector<int>vis1(n+1,0);
  int ans=0;
  while(!st.empty())
  {
    int x=st.top();
    st.pop();
    int idx=0;
    if(!vis1[x])
    {

        int l=dfs(x,vt,vis1,idx);
        cout<<"return value :"<<l<<endl;
        ans=max(ans,l);
    }
  }
  cout<<ans<<endl;

}

int32_t main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        int t;
        // cin>>t;
        // while(t--)
        {
            solve();
        }
    }
