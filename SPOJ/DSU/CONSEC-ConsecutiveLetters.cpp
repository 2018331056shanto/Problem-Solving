// #include<bits/stdc++.h>
// using namespace std;

// struct DSU
// {
// 	std::vector<int>par,sz,rnk;
// 	int c;

// 	DSU(int n):par(n+1),sz(n+1,1),rnk(n+1,0),c(n){
// 		for(int i=0;i<=n;i++)
// 			par[i]=i;
// 	}

// 	int find(int i){

// 		return (par[i]==i?i:(par[i]=find(par[i])));
// 	}


// 	int get_size(int i){

// 		return sz[find(i)];
// 	}

// 	void merge(int i,int j){

// 		if((i=find(i))==(j=find(j))){
// 			return;
// 		}

// 		else{
// 			--c;

// 		}

// 		if(rnk[i]>rnk[j])
// 			swap(i,j);

// 		par[i]=j;
// 		sz[j]+=sz[i];

// 		if(rnk[i]==rnk[j]){
// 			rnk[j]++;
// 		}
// 		// return j;

// 	}

// };

// void solve(){
	
// 	string s;
// 	cin>>s;

// 	string tmp(s);


// 	DSU dsu(s.size());
// 	int q;
// 	cin>>q;

// 	vector<pair<int,int>>a;
	
// 	for(int i=0;i<q;i++)
// 	{
// 		int x,y;
// 		cin>>x>>y; 

// 		if(x==2)
// 		{
// 			tmp[y]='#';
// 		}
// 		a.push_back({x,y});

// 	}

// 	for(int i=0;i<tmp.size();i++)
// 	{
// 		if(i>=1&&tmp[i]!='#'&&tmp[i]==tmp[i-1])
// 		{
// 			dsu.merge(i,i-1);
// 		}
// 	}

// 	vector<int>ans;
// 	for(int i=q-1;i>=0;i--)
// 	{
// 		if(a[i].first==2)
// 		{
// 			tmp[a[i].second]=s[a[i].second];

// 			if(a[i].second>=1&&tmp[a[i].second]==tmp[a[i].second-1])
// 			{
// 				dsu.merge(a[i].second,a[i].second-1);
// 			}

// 			if(a[i].second<tmp.length()-1&&tmp[a[i].second]==tmp[a[i].second+1])
// 			{
// 				dsu.merge(a[i].second,a[i].second+1);
// 			}
// 		}
// 		else
// 		{
// 			ans.push_back(dsu.get_size(a[i].second));
// 		}
// 	}
// 	for(int i=ans.size()-1;i>=0;i--)
// 	{
// 		cout<<ans[i]<<endl;
// 	}

// }

// int32_t main()
// 	{
// 		ios_base::sync_with_stdio(false); cin.tie(NULL);
// 		int t;
// 		cin>>t;
// 		for(int i=1;i<=t;i++)
// 		{
// 			cout<<"Case "<<i<<endl;
// 			solve();
// 		}
// 	}



#include<bits/stdc++.h>

using namespace std;

#define lmt 200020

int par[lmt];
int ans[lmt];

int tot[lmt];

int find_parent(int a)
{
    if(a==par[a]) return a;
    return par[a] = find_parent( par[a] );
}

void Union(int a,int b)
{
    int pa = find_parent( a );
    int pb = find_parent( b );

    if(pa!=pb)
    {
        par[pa] = pb;
        tot[pb] += tot[pa];
    }
}

int getCount(int a)
{
    int pa = find_parent(a);
    return tot[pa];
}

int main()
{
//    freopen("sob.txt","r",stdin);
//    freopen("sob_out.txt","w",stdout);

    char s[lmt] , save[lmt];
    pair<int,int> qr[lmt];
    int ts, kk =1,q ;
    scanf("%d",&ts);
    assert( 1<= ts && ts<=25 );
    while(ts--)
    {
        scanf("%s",s);
        strcpy(save , s);
        int n = strlen(s);
//        cerr<<n<<endl;
        assert( 1<= n && n<= 200000 );

        scanf("%d",&q);
        assert( 1<= q && q<= 100000 );

        for(int i = 0 ; i < q ; i ++)
        {
            scanf("%d%d", &qr[i].first , &qr[i].second);
            if(qr[i].first==2)
            {
                s[qr[i].second] = '#';
            }

        }

        for(int i = 0 ; i < n ; i ++)
        {
            par[i] = i ;
            tot[i] = 1;
            if(i>=1 && s[i]!='#' && s[i]==s[i-1])
            {
                Union(i,i-1);
            }
        }

//        cout<<getCount(4)<<endl;

        int a = 0  ;
        for(int i = q - 1 ; i >= 0 ; i--)
        {
            if( qr[i].first == 1 )
            {
                ans[ a++ ] = getCount( qr[i].second );
            }
            else
            {
                s[qr[i].second] = save[qr[i].second];
                if( qr[i].second >= 1 && s[qr[i].second] == s[qr[i].second-1] )
                {
                    Union(qr[i].second , qr[i].second-1);
                }

                if( qr[i].second < n - 1 && s[qr[i].second] == s[qr[i].second+1] )
                {
                    Union(qr[i].second , qr[i].second+1);
                }

            }
        }
        printf("Case %d:\n",kk++);
        for(int i = a - 1 ; i >= 0 ; i --)
        {
            printf("%d\n",ans[i]);
        }

    }

//    getchar();
//    if( gets(s) ) assert(0);

    return 0;
}