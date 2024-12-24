
// /**
//                         0
//                        / \
//                       2   5
//                      / \   \
//                     1   3   4
//                     	       / \
//                     	      6   7

//                **/
               

  #include<bits/stdc++.h>
       	  using namespace std;
          int LOG;
       	  
          void findParent(vector<int>&parent,vector<vector<int>>&v,vector<int>&visit,vector<int>&depth,int child,int par)
          {
            parent[child]=par;
            visit[child]=1;
            if(child!=0)
            {
              depth[child]=depth[par]+1;
            }
            
            for(int i=0;i<v[child].size();i++)
            {
              int nextChild=v[child][i];

              if(visit[nextChild]!=1)
              {
                findParent(parent,v,visit,depth,nextChild,child);
              }
            }
          }

          void binaryLifting(vector<vector<int>>&up,vector<int>&parent,int n)
          {

            LOG=0;

            while((1<<LOG)<=n)
            {
              LOG++;
            }

            up=vector<vector<int>>(n,vector<int>(LOG));

            for(int i=0;i<n;i++)
            {
              up[i][0]=parent[i];

              for(int j=1;j<LOG;j++)
              {
                up[i][j]=up[up[i][j-1]][j-1];
              }
            }


          }

          int findKthAncestor(vector<vector<int>>&up,vector<int>&depth,int node,int k)
          {

            if(depth[node]<k)
            {
              return -1;
            }

            for(int j=0;j<LOG;j++)
            {
              if(k&(1<<j))
              {
                node=up[node][j];
              }
            }
            return node;
          }

       	  void solve(){
       	  	
       	  	int n,m;
       	  	cin>>n>>m; 
       	  	std::vector<vector<int>> v(n);

       	  	for(int i=0;i<m;i++)
       	  	{
       	  		int x,y; 
       	  		cin>>x>>y; 

       	  		v[x].push_back(y);
       	  		v[y].push_back(x);
       	  	}

            vector<int>parent(n);
            vector<int>visit(n);
            vector<int>depth(n);
            findParent(parent,v,visit,depth,0,0);
            vector<vector<int>>up;
            binaryLifting(up,parent,n);

            int q;
            cin>>q; 

            for(int i=0;i<q;i++)
            {
              int node,k;
              cin>>node>>k; 

              cout<<findKthAncestor(up,depth,node,k)<<endl;

            }

       	  
       	  }
       	  
       	  int32_t main()
       	  	{
       	  		ios_base::sync_with_stdio(false); cin.tie(NULL);
       	  		// int t;
       	  		// cin>>t;
       	  		// while(t--)
       	  		{
       	  			solve();
       	  		}
       	  	}
       	       	  