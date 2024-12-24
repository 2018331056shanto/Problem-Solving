#include<bits/stdc++.h>

using namespace std;

int returnDays(int n,int a,int b,int c,int given){

	int l=0;
	
	if (given+a>=n)
	{
			l= 1;
	}
	else if(given+a+b>=n)
	{
		l= 2;
	}
	else if(given+a+b+c>=n)
		l=3;
	return l;

}

void solve(){
	
	long long n,a,b,c;
	cin>>n>>a>>b>>c;

	long long sum=a+b+c;

	int given=n/sum;


	if(given*sum==n)
	{
		cout<<(given*3)<<endl;
	}
	else if((n-(given*sum))<sum)
	{
		cout<<3*given+returnDays(n,a,b,c,given*sum)<<endl;
	}	


}

int main(){
	
	int t;
	cin>>t; 

	while(t--){

		solve();
	}
}
