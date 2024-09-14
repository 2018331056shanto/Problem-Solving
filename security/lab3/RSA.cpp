#include<bits/stdc++.h>
using namespace std;

#define int __int128


// int findP(int n)
// {
// 	for(int i=2;i*i<=n;i++)
// 	{
// 		if(n%i==0)
// 		{
// 			return i;
// 		}
// 	}
// 	return 1;
// }

// int egcd(int a,int b,int &x,int &y)
// {
// 	if(b==0)
// 	{
// 		x=1;
// 		y=0;
// 		return a;
// 	}

// 	int x1,y1;

// 	int d=egcd(b,a%b,x1,y1);

// 	x=y1;
// 	y=x1-y1*(a/b);

// 	return d;
// }

// int findModInverse(int e,int phi)
// {
// 	int x,y;

// 	int g=egcd(e,phi,x,y);
// 	if(g!=1)
// 	{
// 		return -1;
// 	}

// 	else
// 	{
// 		return (x%phi+phi)%phi;
// 	}
// }

int bigmod(int a,int b,int mod)
{
	if(b==0)
	{
		return 1;
	}

	int x=bigmod(a,b/2,mod);

	x=(x*x)%mod;

	if(b%2==1)
	{
		x=(x*a)%mod;
	}
	return x;
}
vector<int>encrypt(string msg,int e,int n)
{
	vector<int>v;
	for(int i=0;i<msg.length();i++)
	{
		int val=msg[i]-'a'+1;
		int ans=bigmod(val,e,n);
		v.push_back(ans);
	}
	return v;
}

string decrypt(vector<int>c,int d,int n)
{
	string s="";

	for(int i=0;i<c.size();i++)
	{
		int val=c[i];
		int msg=bigmod(val,d,n);
		s+=(msg-1)+'a';
	}
	return s;
}
void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

int findP(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return i;
	}
	return 1;
}



int egcd(int a,int b,int &x,int &y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}

	int x1,y1;
	int d=egcd(b,a%b,x1,y1);
	x=y1;
	y=x1-y1*(a/b);
	return d;
}

int findModInverse(int e,int phi)
{
	int x,y;

	int g=egcd(e,phi,x,y);
	if(g!=1)
	{
		return -1;
	}
	else
	{
		return (x%phi+phi)%phi;
	}
}
int32_t main()
{
	int n=39;
	int e=11;
	int d=11;


	int val=bigmod(5,e,n);
	print(val);

	// int p=findP(n);
	// int q=n/p;
	// int phi=(p-1)*(q-1);


	// int d=findModInverse(e,phi);
	// cout<<d<<endl;
	// print(d);
	// cout<<endl;
	// cout<<d<<endl;
	// string m="hello";
	// vector<int>encryptmsg=encrypt(m,e,n);
	// for(auto x:encryptmsg)
	// {
	// // 	cout<<x<<endl;
	// // }
	// string demsg=decrypt(encryptmsg,d,n);
	// cout<<demsg<<endl;
}




bigmod (int a,int b,int m)
{
	if(b==0)
	{
		return 1;
	}

	int x=bigmod(a,b/2,m);

	x=(x*x)%m;

	if(b%2==1)
	{
		x=(x*a)%m;
	}
	return x;
}