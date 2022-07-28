#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(a%b==0){
        return  b;
    }
    gcd(b,a%b);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	long long int n,temp;
    	cin>>n;
    	
    	while(true)
    	{
    		temp=n;
    		long long int sum=0;
    	while(temp>0)
    	{
    		sum+=temp%10;
    		temp/=10;
    	}
    	long long int gd=gcd(n,sum);
    	if(gd>1)
    	{
    		break;
    	}
    	else
    	{
    		n=n+1;
    	}
    	}
    	cout<<n<<endl;
    	

    }
}	