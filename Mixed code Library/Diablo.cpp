#include <bits/stdc++.h>
using namespace std;
#define MAX 200005
int tre[3*MAX];

void update(int n,int l,int r,int i,int val)
{
   	if(i<=l&&i>=r)
    {
        tre[n]=val;
       return ;
    }
    if(i>r||i<l) return ;
    int mid=(l+r)/2;
    update(2*n,l,mid,i,val);
    update(2*n+1,mid+1,r,i,val);
    tre[n]=tre[2*n]+tre[2*n+1];
    //cout<<"tre[n] :"<<"n"<<n<<" "<<tre[n]<<endl;
}
int query(int n,int l,int r,int i,int j)
{
	//cout<<"i : j"<<i<<" "<<j<<endl;
    if(i>r||j<l) return 0;
    if(i<=l&&j>=r)
        return tre[n];
    int mid=(l+r)/2;
    return query(2*n,l,mid,i,j)+query(2*n+1,mid+1,r,i,j);
}
int arr[MAX];
int cas;
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
    cin>>t;
    
    while(t--)
    {
        int n,q;
        cout<<"Case "<<++cas<<":\n";
        cin>>n>>q;
        int r=n+q+5;
        memset(arr,0,sizeof arr);
        memset(tre,0,sizeof tre);
        for(int i=0;i<=r;i++)
            if(i<n)
            	update(1,0,r,i,1);
        	else
            	update(1,0,r,i,0),arr[i]=0;
    	for(int i=0;i<n;i++) 
            cin>>arr[i];
        while(q--)
        {
            char c;
            int x;
            cin>>c>>x;

            if(c=='c')
            {
                int i=-1;
                for(int j=20;j>=0;j--)
                {
                    int k=i+(1<<j);
                    if(k<r&&query(1,0,r,0,k)<x)
                        i=k;
                }
                update(1,0,r,i+1,0);
                if(arr[i+1])
                cout<<arr[i+1]<<endl;
            	else
            		cout<<"none"<<endl;
            }
            else
            {
                update(1,0,r,n,1);
                arr[n]=x;
                n++;
            }
        }
        
    }
    
    
}