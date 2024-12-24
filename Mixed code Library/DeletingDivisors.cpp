// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		int l=(n&(n-1));
// 		// cout<<l<<endl;
// 		if(n%2==1)
// 		{
// 			cout<<"Bob"<<endl;
// 		}
// 		else if(l!=0)
// 		{
// 			cout<<"Alice"<<endl;
// 		}
// 		else
// 		{
// 			int x=log2(n);
// 			if(x%2==1)
// 			{
// 				cout<<"Bob"<<endl;
// 			}
// 			else
// 			{
// 				cout<<"Alice"<<endl;
// 			}
// 		}
// 	}	
		
// }


#include<bits/stdc++.h>
using namespace std;

int main()

{
	int a[20]={0,1,2,3,4,2,6,2,3,5,1};
int b[20]={0,1,2,3,4,2,6,2,3,5,1};
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cout<<"INSERT :"<<endl;
	int n=10;
	cout<<"BEFORE INSERT:"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	int x,y;
	cin>>x>>y;
	b[x]=y;
	// cout<<x<<" "<<y<<endl;
	n++;
	// cout<<b[y]<<"  ss "<<endl;
	for(int i=x+1;i<20;i++)
	{
		
		
		b[i]=a[i-1];
		// cout<<a[i-1]<<" "<<b[i]<<endl;


	}
	cout<<"AFTER INSERTING :"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	cout<<"FIND :"<<endl;
	int f;
	cin>>f;

	for(int i=1;i<=n;i++)
	{
		if(b[i]==f)
		{
			cout<<i<<endl;
			break;
		}
	}
	cout<<"RETRIVE :"<<endl;
	int r;
	cin>>r;
	cout<<b[r]<<endl;
	cout<<"REMOVE :"<<endl;
	int rr;
	cin>>rr;
	int temp=0;
	for(int i=rr;i<=n;i++)
	{
		temp=b[rr+1];
		// cout<<"index :"<<rr+1<<endl;
		// cout<<"temp "<<temp<<endl;
		b[rr]=temp;
		rr++;

	   
	}
	n--;
	cout<<"AFTER REMOVING :"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;


	
}